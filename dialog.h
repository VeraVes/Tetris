#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QVector>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
 friend class GLASS;
    explicit Dialog(QWidget *parent = 0, int score1=0);
    ~Dialog();
    QVector<QPixmap> contendg;
    QVector<QPixmap> contendb;
    QPixmap pix;
    QBrush brush;
    QPalette pal;
    int scores=0;
private:
    Ui::Dialog *ui;
    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event);
//public:
//    void setscore1(int x)
//    {
//        scores = x;
//    }
};

#endif // DIALOG_H
