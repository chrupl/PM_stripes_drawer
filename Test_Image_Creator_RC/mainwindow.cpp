#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

#include <string>

#include <boost/filesystem.hpp>
#include <boost/regex.hpp>

#include <math.h>

#include "NormalizationLib.h"
#include "DispLib.h"
#include "histograms.h"
#include "gradient.h"
#include "RegionU16Lib.h"
#include "StringFcLib.h"
#include <QTime>
//#include <QtMath>  Usunięte dla zmiany PI


#include <tiffio.h>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#define X_TO_NULL 'x'
#define Y_TO_NULL 'y'
using namespace boost;
using namespace std;
using namespace boost::filesystem;
using namespace cv;

const double m_PI = 3.14159265358979323846;
//=============================================================================
//------------------------------------------------------------------------------------------------------------------------------
//           Out of Calss functions
//------------------------------------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------
//          constructor Destructor
//------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------
int angle_for_draw = 0;
int test_pivot = 0;
int res_x = 500;
int res_y = 500;
float width_for_draw = 5;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------
//          CLASS FUNCTIONS
//------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------
void MainWindow::OpenImageFolder()
{
    path ImageFolder( ui->lineEditImageFolder->text().toStdWString());

    ui->listWidgetImageFiles->clear();
    for (directory_entry& FileToProcess : directory_iterator(ImageFolder))
    {
        regex FilePattern(ui->lineEditRegexImageFile->text().toStdString());
        if (!regex_match(FileToProcess.path().filename().string().c_str(), FilePattern ))
            continue;
        path PathLocal = FileToProcess.path();
        if (!exists(PathLocal))
        {
            ui->textEditOut->append(QString::fromStdString(PathLocal.filename().string() + " File not exists" ));
            break;
        }
        ui->listWidgetImageFiles->addItem(PathLocal.filename().string().c_str());
    }
    if(ui->listWidgetImageFiles->count() && ui->checkBoxAutoProcessFirstFile->checkState())
        ui->listWidgetImageFiles->setCurrentRow(0);
}
//------------------------------------------------------------------------------------------------------------------------------
void MainWindow::ReadImage()
{
    if(ui->checkBoxAutocleanOut->checkState())
        ui->textEditOut->clear();
    int flags;
    //if(ui->checkBoxLoadAnydepth->checkState())
    //    flags = CV_LOAD_IMAGE_ANYDEPTH;
    //else
    //    flags = IMREAD_COLOR;
    flags = IMREAD_COLOR;
    ImIn = imread(FileToOpen.string(), flags);
    if(ImIn.empty())
    {
        ui->textEditOut->append("improper file");
        return;
    }
    string extension = FileToOpen.extension().string();

    if((extension == ".tif" || extension == ".tiff") && ui->checkBoxShowTiffInfo->checkState())
        ui->textEditOut->append(QString::fromStdString(TiffFilePropetiesAsText(FileToOpen.string())));

    if(ui->checkBoxShowMatInfo->checkState())
        ui->textEditOut->append(QString::fromStdString(MatPropetiesAsText(ImIn)));
    //ProcessImages();
}
//------------------------------------------------------------------------------------------------------------------------------

void MainWindow::ShowsScaledImage(Mat Im, string ImWindowName, double displayScale)
{
    if(Im.empty())
    {
        ui->textEditOut->append("Empty Image to show");
        return;
    }
    Mat ImToShow;

    ImToShow = Im.clone();

    if (displayScale != 1.0)
        cv::resize(ImToShow,ImToShow,Size(), displayScale, displayScale, INTER_AREA);
    imshow(ImWindowName, ImToShow);
}
//------------------------------------------------------------------------------------------------------------------------------
void MainWindow::ShowImages()
{
    if(ImIn.empty())
        return;

    double scale = 1 / ui->doubleSpinBoxImageScale->value();

    if(ui->checkBoxShowInput->checkState())
    {
        ShowsScaledImage(ImIn, "Input Image", scale);
    }
    else
    {
        destroyWindow("Input Image");
    }
/*
    Mat ImToShow;
    ShowSolidRegionOnImage(LesionMask * 3, ImIn).copyTo(ImToShow);;
    rectangle(ImToShow, Rect(tilePositionX,tilePositionY, tileSizeX, tileSizeY), Scalar(0.0, 255.0, 0.0, 0.0),
              10);
    ui->widgetImageWhole->paintBitmap(ImToShow);
    ui->widgetImageWhole->repaint();
*/
}
//------------------------------------------------------------------------------------------------------------------------------
void MainWindow::ProcessImages()
{

}

double angle_to_slope(double angle)
{
    if(angle > -45 && angle < 45)
    {
        return tan((angle*m_PI)/180);
    }
    else
    {
        return 1/tan((angle*m_PI)/180);
    }
    return 0;
}
void delay()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
float roundoff(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
}

//------------------------------------------------------------------------------------------------------------------------------
void MainWindow::CreateImages()
{
    double angle = ui->spinBox_angle->value();
    int maxY = ui->spinBox_screen_y->value();
    int maxX = ui->spinBox_screen_x->value();
    int maxYh = maxY/2;
    int maxXh = maxX/2;

    double draw_line_every = ui->spinBox_draw_every_line->value();
    double width_of_stripe = ui->spinBox_width->value();
    double a,b;
    ImIn = Mat::zeros(maxY,maxX,CV_8UC1);
    unsigned char *wImIn;
    wImIn = (unsigned char*)ImIn.data;
    if(angle > -45 && angle < 45)
    {
        a = tan((angle*m_PI)/180);
        b = sqrt(1+pow(a,2));

        for(int y = -maxYh; y < maxYh; y++)
          {
              for(int x = -maxXh; x <  maxXh; x++ )
              {
                for(double i = -maxY; i<maxY;i+=draw_line_every)
                {
                    if(y > a*x+b*(i-width_of_stripe) && y < a*x+b*(i+width_of_stripe))
                    {
                        *wImIn = 255;
                    }
                 }
                  wImIn++;
             }

          }
    }
    else
    {
        a = 1/tan((angle*m_PI)/180);
        b = sqrt(1+pow(a,2));

        for(int y = -maxYh; y < maxYh; y++)
          {
              for(int x = -maxXh; x <  maxXh; x++ )
              {
                for(double i = -maxY; i<maxY;i+=draw_line_every)
                {
                    if(x > a*y+b*(i-width_of_stripe) && x < a*y+b*(i+width_of_stripe))
                    {
                        *wImIn = 255;
                    }
                 }
                  wImIn++;
             }

          }
    }






    imshow("Output",ImIn);
    waitKey(0);
    //ShowImages();
}


int MainWindow::TestImageLine(int angle)
{
    // Create a blank image of size
       // (500 x 500) with black
       // background (B, G, R) : (0, 0, 0)
       Mat image(500, 500, CV_8UC1,Scalar(0));

       // Check if the image is created
       // successfully
       if (!image.data) {
           cout << "Could not open or find"
                << " the image";

           return 0;
       }

       Point p1(250, 0), p2(100, 0);
       Point p3(200, 0), p4(250, 500);
       int thickness = 1;

       // Line drawn using 8 connected
       // Bresenham algorithm
       line(image, p1, p4, 255,
            thickness, LINE_8);

      /* // Line drawn using 4 connected
       // Bresenham algorithm
       line(image, p2, p4, 255,
            thickness, LINE_4);

       // Antialiased line
       line(image, p3, p4, Scalar(0, 0, 255),
            thickness, LINE_AA);
*/
       // Show our image inside window


       int length = 250;
       Point P1(125,50);
       Point P2;

       P2.x =  (int)round(P1.x + length * cos(angle * CV_PI / 180.0));
       P2.y =  (int)round(P1.y + length * sin(angle * CV_PI / 180.0));
       line(image, P1, P2, 255,thickness, LINE_8);

       imshow("Output", image);
       waitKey(0);
       return 0;
}
//------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------
//          Slots
//------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------

void MainWindow::on_pushButtonOpenImageFolder_clicked()
{
    QFileDialog dialog(this, "Open Folder");
    //dialog.setFileMode(QFileDialog::Directory);
    //dialog.setDirectory(ui->lineEditImageFolder->text());
    path ImageFolder;
    if(dialog.exec())
    {
        ImageFolder = dialog.directory().path().toStdWString();
    }
    else
        return;
    if (!exists(ImageFolder))
    {
        ui->textEditOut->append(" Image folder : " + QString::fromStdWString(ImageFolder.wstring())+ " not exists ");
        return;
    }
    if (!is_directory(ImageFolder))
    {
        ui->textEditOut->append(" Image folder : " + QString::fromStdWString(ImageFolder.wstring())+ " This is not a directory path ");
        return;
    }
    ui->lineEditImageFolder->setText(QString::fromStdWString(ImageFolder.wstring()));

    OpenImageFolder();
}

void MainWindow::on_listWidgetImageFiles_currentRowChanged(int currentRow)
{
    FileToOpen = ui->lineEditImageFolder->text().toStdWString();
    FileToOpen.append(ui->listWidgetImageFiles->item(currentRow)->text().toStdWString());
    if(!exists(FileToOpen))
    {
        ui->textEditOut->append(" file : " + QString::fromStdWString(FileToOpen.wstring())+ " not exists ");
        return;
    }

    ReadImage();
    ProcessImages();
    ShowImages();
}

void MainWindow::on_pushButtonProcessAllFiles_clicked()
{
    int filesCount = ui->listWidgetImageFiles->count();
    int firstFile = 0;
    ui->textEditOut->clear();
    //time_t begin,end;
    //time (&begin);
    for(int fileNr = firstFile; fileNr< filesCount; fileNr++)
    {
        FileToOpen = ui->lineEditImageFolder->text().toStdWString();
        FileToOpen.append(ui->listWidgetImageFiles->item(fileNr)->text().toStdWString());
        if(!exists(FileToOpen))
        {
            ui->textEditOut->append(" file : " + QString::fromStdWString(FileToOpen.wstring())+ " not exists ");
            return;
        }

        ReadImage();
        ProcessImages();
        ShowImages();
        waitKey(200);

    }
    //time (&end);
    //double difference = difftime (end,begin);
    //QString TimeStringQ = " calcTime = " + QString::number(difference) + " s" + "\n";
    //ui->textEditOut->append(TimeStringQ);
}

void MainWindow::on_checkBoxShowInput_toggled(bool checked)
{
    ShowImages();
}

void MainWindow::on_doubleSpinBoxImageScale_valueChanged(double arg1)
{
    ShowImages();
}

void MainWindow::on_pushButtonCreateImage_clicked()
{
    CreateImages();
}


void MainWindow::on_pushButtonTestImageLine_clicked()
{
    TestImageLine(angle_for_draw);
}


void MainWindow::on_spinBoxTestImageLine_valueChanged(int arg1)
{
      angle_for_draw = arg1;
}


void MainWindow::on_spinBox_screen_x_valueChanged(int arg1)
{
 res_x = arg1;
}

void MainWindow::on_spinBox_screen_y_valueChanged(int arg1)
{
 res_y = arg1;
}

void MainWindow::on_spinBoxTestImageLine_2_valueChanged(int arg1)
{
    test_pivot = arg1;
}


void MainWindow::on_spinBox_width_valueChanged(int arg1)
{
 CreateImages();
}


void MainWindow::on_spinBox_angle_valueChanged(int arg1)
{
    CreateImages();
}


void MainWindow::on_spinBox_draw_every_line_valueChanged(int arg1)
{
     CreateImages();
}

