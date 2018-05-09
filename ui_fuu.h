/********************************************************************************
** Form generated from reading UI file 'fuu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUU_H
#define UI_FUU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FUU
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QLabel *label;

    void setupUi(QDialog *FUU)
    {
        if (FUU->objectName().isEmpty())
            FUU->setObjectName(QStringLiteral("FUU"));
        FUU->setWindowModality(Qt::WindowModal);
        FUU->resize(320, 240);
        FUU->setModal(true);
        gridLayout_2 = new QGridLayout(FUU);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buttonBox = new QDialogButtonBox(FUU);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMaximumSize(QSize(16777215, 25));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 1, 1, 1);

        widget = new QWidget(FUU);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout_2->addWidget(widget, 1, 0, 1, 3);

        label = new QLabel(FUU);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 20));

        gridLayout_2->addWidget(label, 0, 0, 1, 3);


        retranslateUi(FUU);
        QObject::connect(buttonBox, SIGNAL(accepted()), FUU, SLOT(close()));

        QMetaObject::connectSlotsByName(FUU);
    } // setupUi

    void retranslateUi(QDialog *FUU)
    {
        FUU->setWindowTitle(QApplication::translate("FUU", "Dialog", nullptr));
        label->setText(QApplication::translate("FUU", "uuu, rezultat ne ochen' =(", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FUU: public Ui_FUU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUU_H
