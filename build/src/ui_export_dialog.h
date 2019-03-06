/********************************************************************************
** Form generated from reading UI file 'export_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORT_DIALOG_H
#define UI_EXPORT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QWidget *pathGroup;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QLineEdit *textFile;
    QToolButton *fileBrowse;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout_2;
    QGroupBox *modeFormat;
    QFormLayout *formLayout_2;
    QRadioButton *rbText;
    QRadioButton *rbCSV;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QLabel *label_18;
    QSpinBox *spinMaxDepth;
    QLabel *label_16;
    QLineEdit *textMinSize;
    QLineEdit *textMinAge;
    QLabel *label_15;
    QLineEdit *textMaxAge;
    QLabel *label_17;
    QLineEdit *textExtra;
    QCheckBox *checkSameFilesystem;
    QCheckBox *checkVerbose;
    QWidget *tab4;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *textExclude;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName(QStringLiteral("ExportDialog"));
        ExportDialog->resize(614, 358);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExportDialog->sizePolicy().hasHeightForWidth());
        ExportDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ExportDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        buttonBox = new QDialogButtonBox(ExportDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout->addWidget(buttonBox, 9, 0, 1, 2);

        pathGroup = new QWidget(ExportDialog);
        pathGroup->setObjectName(QStringLiteral("pathGroup"));
        horizontalLayout = new QHBoxLayout(pathGroup);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_13 = new QLabel(pathGroup);
        label_13->setObjectName(QStringLiteral("label_13"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_13);

        textFile = new QLineEdit(pathGroup);
        textFile->setObjectName(QStringLiteral("textFile"));

        horizontalLayout->addWidget(textFile);

        fileBrowse = new QToolButton(pathGroup);
        fileBrowse->setObjectName(QStringLiteral("fileBrowse"));

        horizontalLayout->addWidget(fileBrowse);


        gridLayout->addWidget(pathGroup, 1, 0, 1, 2);

        tabWidget = new QTabWidget(ExportDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        gridLayout_2 = new QGridLayout(tab1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        modeFormat = new QGroupBox(tab1);
        modeFormat->setObjectName(QStringLiteral("modeFormat"));
        formLayout_2 = new QFormLayout(modeFormat);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(-1, -1, -1, 0);
        rbText = new QRadioButton(modeFormat);
        rbText->setObjectName(QStringLiteral("rbText"));
        sizePolicy.setHeightForWidth(rbText->sizePolicy().hasHeightForWidth());
        rbText->setSizePolicy(sizePolicy);
        rbText->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, rbText);

        rbCSV = new QRadioButton(modeFormat);
        rbCSV->setObjectName(QStringLiteral("rbCSV"));
        sizePolicy.setHeightForWidth(rbCSV->sizePolicy().hasHeightForWidth());
        rbCSV->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, rbCSV);


        gridLayout_2->addWidget(modeFormat, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 6, 0, 1, 1);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_4->addWidget(label_18, 2, 0, 1, 1);

        spinMaxDepth = new QSpinBox(groupBox_2);
        spinMaxDepth->setObjectName(QStringLiteral("spinMaxDepth"));
        sizePolicy.setHeightForWidth(spinMaxDepth->sizePolicy().hasHeightForWidth());
        spinMaxDepth->setSizePolicy(sizePolicy);
        spinMaxDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMaxDepth->setMaximum(999999);

        gridLayout_4->addWidget(spinMaxDepth, 3, 1, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 1, 0, 1, 1);

        textMinSize = new QLineEdit(groupBox_2);
        textMinSize->setObjectName(QStringLiteral("textMinSize"));
        sizePolicy.setHeightForWidth(textMinSize->sizePolicy().hasHeightForWidth());
        textMinSize->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(textMinSize, 0, 1, 1, 1);

        textMinAge = new QLineEdit(groupBox_2);
        textMinAge->setObjectName(QStringLiteral("textMinAge"));
        sizePolicy.setHeightForWidth(textMinAge->sizePolicy().hasHeightForWidth());
        textMinAge->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(textMinAge, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 0, 0, 1, 1);

        textMaxAge = new QLineEdit(groupBox_2);
        textMaxAge->setObjectName(QStringLiteral("textMaxAge"));
        sizePolicy.setHeightForWidth(textMaxAge->sizePolicy().hasHeightForWidth());
        textMaxAge->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(textMaxAge, 2, 1, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        textExtra = new QLineEdit(groupBox_2);
        textExtra->setObjectName(QStringLiteral("textExtra"));

        gridLayout_4->addWidget(textExtra, 7, 0, 1, 2);

        checkSameFilesystem = new QCheckBox(groupBox_2);
        checkSameFilesystem->setObjectName(QStringLiteral("checkSameFilesystem"));

        gridLayout_4->addWidget(checkSameFilesystem, 5, 0, 1, 2);

        checkVerbose = new QCheckBox(groupBox_2);
        checkVerbose->setObjectName(QStringLiteral("checkVerbose"));

        gridLayout_4->addWidget(checkVerbose, 4, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        tabWidget->addTab(tab1, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QStringLiteral("tab4"));
        verticalLayout_3 = new QVBoxLayout(tab4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textExclude = new QPlainTextEdit(tab4);
        textExclude->setObjectName(QStringLiteral("textExclude"));
        textExclude->setLineWrapMode(QPlainTextEdit::NoWrap);

        verticalLayout_3->addWidget(textExclude);

        tabWidget->addTab(tab4, QString());

        gridLayout->addWidget(tabWidget, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_13->setBuddy(textFile);
        label_18->setBuddy(textMaxAge);
        label_16->setBuddy(textMinAge);
        label_15->setBuddy(textMinSize);
        label_17->setBuddy(spinMaxDepth);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(textFile, fileBrowse);
        QWidget::setTabOrder(fileBrowse, tabWidget);
        QWidget::setTabOrder(tabWidget, rbText);
        QWidget::setTabOrder(rbText, rbCSV);
        QWidget::setTabOrder(rbCSV, textMinSize);
        QWidget::setTabOrder(textMinSize, textMinAge);
        QWidget::setTabOrder(textMinAge, textMaxAge);
        QWidget::setTabOrder(textMaxAge, spinMaxDepth);
        QWidget::setTabOrder(spinMaxDepth, checkVerbose);
        QWidget::setTabOrder(checkVerbose, checkSameFilesystem);
        QWidget::setTabOrder(checkSameFilesystem, textExtra);
        QWidget::setTabOrder(textExtra, textExclude);

        retranslateUi(ExportDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        label_13->setText(QApplication::translate("ExportDialog", "File:", Q_NULLPTR));
        fileBrowse->setText(QApplication::translate("ExportDialog", "...", Q_NULLPTR));
        modeFormat->setTitle(QApplication::translate("ExportDialog", "Format", Q_NULLPTR));
        rbText->setText(QApplication::translate("ExportDialog", "Text (only filenames)", Q_NULLPTR));
        rbCSV->setText(QApplication::translate("ExportDialog", "CSV (with size and datetime)", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ExportDialog", "Settings", Q_NULLPTR));
        label_12->setText(QApplication::translate("ExportDialog", "Extra arguments:", Q_NULLPTR));
        label_18->setText(QApplication::translate("ExportDialog", "Maximum age (s or ms|s|m|h|d|w|M|y suffix)", Q_NULLPTR));
        label_16->setText(QApplication::translate("ExportDialog", "Minimum age (s or ms|s|m|h|d|w|M|y suffix)", Q_NULLPTR));
        label_15->setText(QApplication::translate("ExportDialog", "Minimum size (KiB or b|k|M|G suffix)", Q_NULLPTR));
        label_17->setText(QApplication::translate("ExportDialog", "Maximum depth", Q_NULLPTR));
        checkSameFilesystem->setText(QApplication::translate("ExportDialog", "Don't cross filesystem boundaries", Q_NULLPTR));
        checkVerbose->setText(QApplication::translate("ExportDialog", "Verbose output", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("ExportDialog", "Settings", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab4), QApplication::translate("ExportDialog", "Exclude", Q_NULLPTR));
        Q_UNUSED(ExportDialog);
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORT_DIALOG_H
