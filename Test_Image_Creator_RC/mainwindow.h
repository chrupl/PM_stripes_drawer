#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <boost/filesystem.hpp>
#include <opencv2/core/core.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonOpenImageFolder_clicked();

    void on_listWidgetImageFiles_currentRowChanged(int currentRow);

    void on_pushButtonProcessAllFiles_clicked();

    void on_checkBoxShowInput_toggled(bool checked);

    void on_doubleSpinBoxImageScale_valueChanged(double arg1);

    void on_pushButtonCreateImage_clicked();

    void on_pushButtonTestImageLine_clicked();

    void on_spinBoxTestImageLine_valueChanged(int arg1);

    void on_spinBox_screen_x_valueChanged(int arg1);

    void on_spinBox_screen_y_valueChanged(int arg1);

    void on_spinBoxTestImageLine_2_valueChanged(int arg1);

    void on_spinBox_width_valueChanged(int arg1);

    void on_spinBox_angle_valueChanged(int arg1);

    void on_spinBox_draw_every_line_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;

    boost::filesystem::path FileToOpen;

    cv::Mat ImIn;

    double minIm;
    double maxIm;

    void OpenImageFolder();
    void ReadImage();
    void ShowsScaledImage(cv::Mat Im, std::string ImWindowName, double dispalyScale);
    void ShowImages();
    void ProcessImages();
    void CreateImages();
    int TestImageLine(int angle);
};

#endif // MAINWINDOW_H
