#include "tex.h"

tex::tex(QWidget *parent) : QWidget(parent)
{

}

void tex::Chtext()
{
    emit change(t[rand()%9]);
}
