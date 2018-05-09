#include "mainwindow.h"

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

//void MainWindow::end(bool a)
//{
//    ui->wi->setFixedSize(1000, 1000);
//    ui->wi->focusWidget();
//    ui->wi->show();
//    QBrush br(Qt::TexturePattern);
//    br.setTextureImage(QImage(contendb[rand()%contendb.size()]));
//    QPalette plt = ui->wi->palette();
//    plt.setBrush(QPalette::Background, br);
//    ui->wi->setPalette(plt);
//    ui->wi->show();
//    ui->wi->setFocus();
//    if (a==false)
//    {

//        ui->label_end->setText("Oyyyyyy....rezultat ne super");
//      //  ui->label1_end->setPalette(*palette);
//        //ui->label1_end->setPixmap(contendb[rand()%contendb.size()].scaled(200,200 , Qt::KeepAspectRatio));
//    }
//    else
//    {
//        ui->label_end->setText("Mamylia rulit");
//       // ui->label1_end->setPixmap(contendg[rand()%contendg.size()].scaled(200,200, Qt::KeepAspectRatio));
//    };
//    ui->label_end->show();
//    ui->label1_end->show();
//}
