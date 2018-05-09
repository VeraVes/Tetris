#ifndef XDIALOG_H
#define XDIALOG_H

#include <QWidget>
#include <QBrush>
#include <QPalette>
#include <QPixmap>
class xDialog : public QWidget
{
    Q_OBJECT
public:
    explicit xDialog(QWidget *parent = nullptr);
};

#endif // XDIALOG_H
