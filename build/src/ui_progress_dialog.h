/********************************************************************************
** Form generated from reading UI file 'progress_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESS_DIALOG_H
#define UI_PROGRESS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ProgressDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *labelOperation;
    QPlainTextEdit *output;
    QDialogButtonBox *buttonBox;
    QToolButton *buttonShowOutput;
    QLabel *labelInfo;

    void setupUi(QDialog *ProgressDialog)
    {
        if (ProgressDialog->objectName().isEmpty())
            ProgressDialog->setObjectName(QStringLiteral("ProgressDialog"));
        ProgressDialog->resize(618, 291);
        gridLayout = new QGridLayout(ProgressDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelOperation = new QLabel(ProgressDialog);
        labelOperation->setObjectName(QStringLiteral("labelOperation"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelOperation->sizePolicy().hasHeightForWidth());
        labelOperation->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelOperation, 2, 0, 1, 1);

        output = new QPlainTextEdit(ProgressDialog);
        output->setObjectName(QStringLiteral("output"));
        output->setMinimumSize(QSize(600, 200));
        output->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(output, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ProgressDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(false);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        buttonShowOutput = new QToolButton(ProgressDialog);
        buttonShowOutput->setObjectName(QStringLiteral("buttonShowOutput"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonShowOutput->sizePolicy().hasHeightForWidth());
        buttonShowOutput->setSizePolicy(sizePolicy1);
        buttonShowOutput->setStyleSheet(QStringLiteral("QToolButton { border: none; }"));
        buttonShowOutput->setCheckable(true);
        buttonShowOutput->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonShowOutput->setArrowType(Qt::RightArrow);

        gridLayout->addWidget(buttonShowOutput, 3, 0, 1, 2);

        labelInfo = new QLabel(ProgressDialog);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelInfo->sizePolicy().hasHeightForWidth());
        labelInfo->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelInfo, 2, 1, 1, 1);

        QWidget::setTabOrder(buttonShowOutput, output);

        retranslateUi(ProgressDialog);

        QMetaObject::connectSlotsByName(ProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *ProgressDialog)
    {
        buttonShowOutput->setText(QApplication::translate("ProgressDialog", "Show Output", Q_NULLPTR));
        Q_UNUSED(ProgressDialog);
    } // retranslateUi

};

namespace Ui {
    class ProgressDialog: public Ui_ProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESS_DIALOG_H
