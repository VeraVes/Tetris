#ifndef PHOTO_H
#define PHOTO_H

#include <QWidget>

class Photo : public QWidget
{
    Q_OBJECT
    QPixmap pixmap;
    QVector<QPixmap> cont;
    QVector<QString> t;
public:
    explicit Photo(QWidget *parent = nullptr);

signals:
    void changeText(QString);
public slots:
    void scoreChanged(int);
    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event);
};

#endif // PHOTO_H
