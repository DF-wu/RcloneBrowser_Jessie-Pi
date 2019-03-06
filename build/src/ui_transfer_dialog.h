/********************************************************************************
** Form generated from reading UI file 'transfer_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_DIALOG_H
#define UI_TRANSFER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransferDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QWidget *pathGroup;
    QGridLayout *gridLayout_3;
    QLineEdit *textDest;
    QLabel *label_13;
    QToolButton *buttonSourceFile;
    QLabel *label_14;
    QToolButton *buttonSourceFolder;
    QToolButton *buttonDest;
    QLineEdit *textSource;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *modeGroup;
    QFormLayout *formLayout_2;
    QRadioButton *rbCopy;
    QRadioButton *rbMove;
    QRadioButton *rbSync;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *cbSyncDelete;
    QSpacerItem *verticalSpacer;
    QGroupBox *skipFilesGroup;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QComboBox *cbCompare;
    QCheckBox *checkSkipNewer;
    QCheckBox *checkCompare;
    QCheckBox *checkSkipExisting;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkVerbose;
    QCheckBox *checkSameFilesystem;
    QCheckBox *checkDontUpdateModified;
    QLabel *label_12;
    QLineEdit *textExtra;
    QWidget *tab3;
    QFormLayout *formLayout;
    QLabel *label_5;
    QSpinBox *spinCheckers;
    QLabel *label;
    QLineEdit *textBandwidth;
    QLabel *label_2;
    QLineEdit *textMinSize;
    QLabel *label_6;
    QLineEdit *textMinAge;
    QLabel *label_3;
    QLineEdit *textMaxAge;
    QLabel *label_4;
    QSpinBox *spinMaxDepth;
    QLabel *label_8;
    QSpinBox *spinConnectTimeout;
    QLabel *label_7;
    QSpinBox *spinIdleTimeout;
    QLabel *label_9;
    QSpinBox *spinRetries;
    QLabel *label_10;
    QSpinBox *spinLowLevelRetries;
    QSpinBox *spinTransfers;
    QLabel *label_11;
    QWidget *tab4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkDeleteExcluded;
    QPlainTextEdit *textExclude;

    void setupUi(QDialog *TransferDialog)
    {
        if (TransferDialog->objectName().isEmpty())
            TransferDialog->setObjectName(QStringLiteral("TransferDialog"));
        TransferDialog->resize(756, 587);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TransferDialog->sizePolicy().hasHeightForWidth());
        TransferDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(TransferDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        buttonBox = new QDialogButtonBox(TransferDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::RestoreDefaults);

        gridLayout->addWidget(buttonBox, 9, 0, 1, 2);

        pathGroup = new QWidget(TransferDialog);
        pathGroup->setObjectName(QStringLiteral("pathGroup"));
        gridLayout_3 = new QGridLayout(pathGroup);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textDest = new QLineEdit(pathGroup);
        textDest->setObjectName(QStringLiteral("textDest"));

        gridLayout_3->addWidget(textDest, 1, 1, 1, 2);

        label_13 = new QLabel(pathGroup);
        label_13->setObjectName(QStringLiteral("label_13"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        buttonSourceFile = new QToolButton(pathGroup);
        buttonSourceFile->setObjectName(QStringLiteral("buttonSourceFile"));
        buttonSourceFile->setStyleSheet(QStringLiteral("QToolButton { border: 0; }"));

        gridLayout_3->addWidget(buttonSourceFile, 0, 3, 1, 1);

        label_14 = new QLabel(pathGroup);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        buttonSourceFolder = new QToolButton(pathGroup);
        buttonSourceFolder->setObjectName(QStringLiteral("buttonSourceFolder"));
        buttonSourceFolder->setStyleSheet(QStringLiteral("QToolButton { border: 0; }"));

        gridLayout_3->addWidget(buttonSourceFolder, 0, 4, 1, 1);

        buttonDest = new QToolButton(pathGroup);
        buttonDest->setObjectName(QStringLiteral("buttonDest"));
        buttonDest->setStyleSheet(QStringLiteral("QToolButton { border: 0; }"));

        gridLayout_3->addWidget(buttonDest, 1, 3, 1, 1);

        textSource = new QLineEdit(pathGroup);
        textSource->setObjectName(QStringLiteral("textSource"));

        gridLayout_3->addWidget(textSource, 0, 1, 1, 2);


        gridLayout->addWidget(pathGroup, 1, 0, 1, 2);

        tabWidget = new QTabWidget(TransferDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        gridLayout_2 = new QGridLayout(tab1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);

        modeGroup = new QGroupBox(tab1);
        modeGroup->setObjectName(QStringLiteral("modeGroup"));
        formLayout_2 = new QFormLayout(modeGroup);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(-1, -1, -1, 0);
        rbCopy = new QRadioButton(modeGroup);
        rbCopy->setObjectName(QStringLiteral("rbCopy"));
        sizePolicy.setHeightForWidth(rbCopy->sizePolicy().hasHeightForWidth());
        rbCopy->setSizePolicy(sizePolicy);
        rbCopy->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, rbCopy);

        rbMove = new QRadioButton(modeGroup);
        rbMove->setObjectName(QStringLiteral("rbMove"));
        sizePolicy.setHeightForWidth(rbMove->sizePolicy().hasHeightForWidth());
        rbMove->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, rbMove);

        rbSync = new QRadioButton(modeGroup);
        rbSync->setObjectName(QStringLiteral("rbSync"));
        sizePolicy.setHeightForWidth(rbSync->sizePolicy().hasHeightForWidth());
        rbSync->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, rbSync);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(4, QFormLayout::LabelRole, horizontalSpacer_2);

        cbSyncDelete = new QComboBox(modeGroup);
        cbSyncDelete->setObjectName(QStringLiteral("cbSyncDelete"));
        cbSyncDelete->setEnabled(false);
        sizePolicy.setHeightForWidth(cbSyncDelete->sizePolicy().hasHeightForWidth());
        cbSyncDelete->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, cbSyncDelete);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(3, QFormLayout::LabelRole, verticalSpacer);


        gridLayout_2->addWidget(modeGroup, 0, 0, 1, 1);

        skipFilesGroup = new QGroupBox(tab1);
        skipFilesGroup->setObjectName(QStringLiteral("skipFilesGroup"));
        gridLayout_4 = new QGridLayout(skipFilesGroup);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 3, 3, 1, 1);

        cbCompare = new QComboBox(skipFilesGroup);
        cbCompare->setObjectName(QStringLiteral("cbCompare"));
        sizePolicy.setHeightForWidth(cbCompare->sizePolicy().hasHeightForWidth());
        cbCompare->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(cbCompare, 3, 2, 1, 1, Qt::AlignVCenter);

        checkSkipNewer = new QCheckBox(skipFilesGroup);
        checkSkipNewer->setObjectName(QStringLiteral("checkSkipNewer"));

        gridLayout_4->addWidget(checkSkipNewer, 1, 0, 1, 3);

        checkCompare = new QCheckBox(skipFilesGroup);
        checkCompare->setObjectName(QStringLiteral("checkCompare"));
        checkCompare->setChecked(true);

        gridLayout_4->addWidget(checkCompare, 3, 0, 1, 2, Qt::AlignBottom);

        checkSkipExisting = new QCheckBox(skipFilesGroup);
        checkSkipExisting->setObjectName(QStringLiteral("checkSkipExisting"));

        gridLayout_4->addWidget(checkSkipExisting, 2, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 4, 0, 1, 1);


        gridLayout_2->addWidget(skipFilesGroup, 0, 1, 1, 1);

        groupBox = new QGroupBox(tab1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkVerbose = new QCheckBox(groupBox);
        checkVerbose->setObjectName(QStringLiteral("checkVerbose"));

        verticalLayout->addWidget(checkVerbose);

        checkSameFilesystem = new QCheckBox(groupBox);
        checkSameFilesystem->setObjectName(QStringLiteral("checkSameFilesystem"));

        verticalLayout->addWidget(checkSameFilesystem);

        checkDontUpdateModified = new QCheckBox(groupBox);
        checkDontUpdateModified->setObjectName(QStringLiteral("checkDontUpdateModified"));

        verticalLayout->addWidget(checkDontUpdateModified);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        textExtra = new QLineEdit(groupBox);
        textExtra->setObjectName(QStringLiteral("textExtra"));

        verticalLayout->addWidget(textExtra);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 2);

        tabWidget->addTab(tab1, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QStringLiteral("tab3"));
        formLayout = new QFormLayout(tab3);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_5 = new QLabel(tab3);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        spinCheckers = new QSpinBox(tab3);
        spinCheckers->setObjectName(QStringLiteral("spinCheckers"));
        sizePolicy.setHeightForWidth(spinCheckers->sizePolicy().hasHeightForWidth());
        spinCheckers->setSizePolicy(sizePolicy);
        spinCheckers->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCheckers->setMinimum(1);
        spinCheckers->setMaximum(999);
        spinCheckers->setValue(8);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinCheckers);

        label = new QLabel(tab3);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        textBandwidth = new QLineEdit(tab3);
        textBandwidth->setObjectName(QStringLiteral("textBandwidth"));
        sizePolicy.setHeightForWidth(textBandwidth->sizePolicy().hasHeightForWidth());
        textBandwidth->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, textBandwidth);

        label_2 = new QLabel(tab3);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        textMinSize = new QLineEdit(tab3);
        textMinSize->setObjectName(QStringLiteral("textMinSize"));
        sizePolicy.setHeightForWidth(textMinSize->sizePolicy().hasHeightForWidth());
        textMinSize->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, textMinSize);

        label_6 = new QLabel(tab3);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        textMinAge = new QLineEdit(tab3);
        textMinAge->setObjectName(QStringLiteral("textMinAge"));
        sizePolicy.setHeightForWidth(textMinAge->sizePolicy().hasHeightForWidth());
        textMinAge->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::FieldRole, textMinAge);

        label_3 = new QLabel(tab3);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        textMaxAge = new QLineEdit(tab3);
        textMaxAge->setObjectName(QStringLiteral("textMaxAge"));
        sizePolicy.setHeightForWidth(textMaxAge->sizePolicy().hasHeightForWidth());
        textMaxAge->setSizePolicy(sizePolicy);

        formLayout->setWidget(5, QFormLayout::FieldRole, textMaxAge);

        label_4 = new QLabel(tab3);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        spinMaxDepth = new QSpinBox(tab3);
        spinMaxDepth->setObjectName(QStringLiteral("spinMaxDepth"));
        sizePolicy.setHeightForWidth(spinMaxDepth->sizePolicy().hasHeightForWidth());
        spinMaxDepth->setSizePolicy(sizePolicy);
        spinMaxDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMaxDepth->setMaximum(999999);

        formLayout->setWidget(6, QFormLayout::FieldRole, spinMaxDepth);

        label_8 = new QLabel(tab3);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        spinConnectTimeout = new QSpinBox(tab3);
        spinConnectTimeout->setObjectName(QStringLiteral("spinConnectTimeout"));
        sizePolicy.setHeightForWidth(spinConnectTimeout->sizePolicy().hasHeightForWidth());
        spinConnectTimeout->setSizePolicy(sizePolicy);
        spinConnectTimeout->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinConnectTimeout->setMinimum(1);
        spinConnectTimeout->setMaximum(999999);
        spinConnectTimeout->setValue(60);

        formLayout->setWidget(7, QFormLayout::FieldRole, spinConnectTimeout);

        label_7 = new QLabel(tab3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_7);

        spinIdleTimeout = new QSpinBox(tab3);
        spinIdleTimeout->setObjectName(QStringLiteral("spinIdleTimeout"));
        sizePolicy.setHeightForWidth(spinIdleTimeout->sizePolicy().hasHeightForWidth());
        spinIdleTimeout->setSizePolicy(sizePolicy);
        spinIdleTimeout->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinIdleTimeout->setMaximum(999999);
        spinIdleTimeout->setValue(300);

        formLayout->setWidget(8, QFormLayout::FieldRole, spinIdleTimeout);

        label_9 = new QLabel(tab3);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_9);

        spinRetries = new QSpinBox(tab3);
        spinRetries->setObjectName(QStringLiteral("spinRetries"));
        sizePolicy.setHeightForWidth(spinRetries->sizePolicy().hasHeightForWidth());
        spinRetries->setSizePolicy(sizePolicy);
        spinRetries->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinRetries->setMinimum(1);
        spinRetries->setMaximum(999999);
        spinRetries->setValue(3);

        formLayout->setWidget(9, QFormLayout::FieldRole, spinRetries);

        label_10 = new QLabel(tab3);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_10);

        spinLowLevelRetries = new QSpinBox(tab3);
        spinLowLevelRetries->setObjectName(QStringLiteral("spinLowLevelRetries"));
        sizePolicy.setHeightForWidth(spinLowLevelRetries->sizePolicy().hasHeightForWidth());
        spinLowLevelRetries->setSizePolicy(sizePolicy);
        spinLowLevelRetries->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinLowLevelRetries->setMinimum(1);
        spinLowLevelRetries->setMaximum(999999);
        spinLowLevelRetries->setValue(10);

        formLayout->setWidget(10, QFormLayout::FieldRole, spinLowLevelRetries);

        spinTransfers = new QSpinBox(tab3);
        spinTransfers->setObjectName(QStringLiteral("spinTransfers"));
        sizePolicy.setHeightForWidth(spinTransfers->sizePolicy().hasHeightForWidth());
        spinTransfers->setSizePolicy(sizePolicy);
        spinTransfers->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTransfers->setMinimum(1);
        spinTransfers->setMaximum(999);
        spinTransfers->setValue(4);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinTransfers);

        label_11 = new QLabel(tab3);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_11);

        tabWidget->addTab(tab3, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QStringLiteral("tab4"));
        verticalLayout_3 = new QVBoxLayout(tab4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkDeleteExcluded = new QCheckBox(tab4);
        checkDeleteExcluded->setObjectName(QStringLiteral("checkDeleteExcluded"));

        verticalLayout_3->addWidget(checkDeleteExcluded);

        textExclude = new QPlainTextEdit(tab4);
        textExclude->setObjectName(QStringLiteral("textExclude"));
        textExclude->setLineWrapMode(QPlainTextEdit::NoWrap);

        verticalLayout_3->addWidget(textExclude);

        tabWidget->addTab(tab4, QString());

        gridLayout->addWidget(tabWidget, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_13->setBuddy(textSource);
        label_14->setBuddy(textDest);
        label_5->setBuddy(spinCheckers);
        label->setBuddy(textBandwidth);
        label_2->setBuddy(textMinSize);
        label_6->setBuddy(textMinAge);
        label_3->setBuddy(textMaxAge);
        label_4->setBuddy(spinMaxDepth);
        label_8->setBuddy(spinConnectTimeout);
        label_7->setBuddy(spinIdleTimeout);
        label_9->setBuddy(spinRetries);
        label_10->setBuddy(spinLowLevelRetries);
        label_11->setBuddy(spinTransfers);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(textSource, buttonSourceFile);
        QWidget::setTabOrder(buttonSourceFile, buttonSourceFolder);
        QWidget::setTabOrder(buttonSourceFolder, textDest);
        QWidget::setTabOrder(textDest, buttonDest);
        QWidget::setTabOrder(buttonDest, tabWidget);
        QWidget::setTabOrder(tabWidget, rbCopy);
        QWidget::setTabOrder(rbCopy, rbMove);
        QWidget::setTabOrder(rbMove, rbSync);
        QWidget::setTabOrder(rbSync, cbSyncDelete);
        QWidget::setTabOrder(cbSyncDelete, checkSkipNewer);
        QWidget::setTabOrder(checkSkipNewer, checkSkipExisting);
        QWidget::setTabOrder(checkSkipExisting, checkCompare);
        QWidget::setTabOrder(checkCompare, cbCompare);
        QWidget::setTabOrder(cbCompare, checkVerbose);
        QWidget::setTabOrder(checkVerbose, checkSameFilesystem);
        QWidget::setTabOrder(checkSameFilesystem, checkDontUpdateModified);
        QWidget::setTabOrder(checkDontUpdateModified, textExtra);
        QWidget::setTabOrder(textExtra, spinTransfers);
        QWidget::setTabOrder(spinTransfers, spinCheckers);
        QWidget::setTabOrder(spinCheckers, textBandwidth);
        QWidget::setTabOrder(textBandwidth, textMinSize);
        QWidget::setTabOrder(textMinSize, textMinAge);
        QWidget::setTabOrder(textMinAge, textMaxAge);
        QWidget::setTabOrder(textMaxAge, spinMaxDepth);
        QWidget::setTabOrder(spinMaxDepth, spinConnectTimeout);
        QWidget::setTabOrder(spinConnectTimeout, spinIdleTimeout);
        QWidget::setTabOrder(spinIdleTimeout, spinRetries);
        QWidget::setTabOrder(spinRetries, spinLowLevelRetries);
        QWidget::setTabOrder(spinLowLevelRetries, checkDeleteExcluded);
        QWidget::setTabOrder(checkDeleteExcluded, textExclude);

        retranslateUi(TransferDialog);
        QObject::connect(rbSync, SIGNAL(toggled(bool)), cbSyncDelete, SLOT(setEnabled(bool)));
        QObject::connect(checkCompare, SIGNAL(toggled(bool)), cbCompare, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TransferDialog);
    } // setupUi

    void retranslateUi(QDialog *TransferDialog)
    {
        label_13->setText(QApplication::translate("TransferDialog", "Source:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonSourceFile->setToolTip(QApplication::translate("TransferDialog", "Choose file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("TransferDialog", "Destination:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonSourceFolder->setToolTip(QApplication::translate("TransferDialog", "Choose folder", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buttonDest->setToolTip(QApplication::translate("TransferDialog", "Choose folder", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        modeGroup->setTitle(QApplication::translate("TransferDialog", "Mode", Q_NULLPTR));
        rbCopy->setText(QApplication::translate("TransferDialog", "Copy", Q_NULLPTR));
        rbMove->setText(QApplication::translate("TransferDialog", "Move", Q_NULLPTR));
        rbSync->setText(QApplication::translate("TransferDialog", "Sync", Q_NULLPTR));
        cbSyncDelete->clear();
        cbSyncDelete->insertItems(0, QStringList()
         << QApplication::translate("TransferDialog", "Delete during transfer", Q_NULLPTR)
         << QApplication::translate("TransferDialog", "Delete after transfering", Q_NULLPTR)
         << QApplication::translate("TransferDialog", "Delete before transfering", Q_NULLPTR)
        );
        skipFilesGroup->setTitle(QApplication::translate("TransferDialog", "Skip files", Q_NULLPTR));
        cbCompare->clear();
        cbCompare->insertItems(0, QStringList()
         << QApplication::translate("TransferDialog", "Size & mod-time", Q_NULLPTR)
         << QApplication::translate("TransferDialog", "Size & checksum", Q_NULLPTR)
         << QApplication::translate("TransferDialog", "Only mod-time", Q_NULLPTR)
         << QApplication::translate("TransferDialog", "Only size", Q_NULLPTR)
         << QApplication::translate("TransferDialog", "Only checksum", Q_NULLPTR)
        );
        cbCompare->setCurrentText(QApplication::translate("TransferDialog", "Size & mod-time", Q_NULLPTR));
        checkSkipNewer->setText(QApplication::translate("TransferDialog", "Skip files that are newer on the destination", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkCompare->setToolTip(QApplication::translate("TransferDialog", "-ignore-times", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkCompare->setText(QApplication::translate("TransferDialog", "Compare", Q_NULLPTR));
        checkSkipExisting->setText(QApplication::translate("TransferDialog", "Skip all files that exist", Q_NULLPTR));
        groupBox->setTitle(QString());
        checkVerbose->setText(QApplication::translate("TransferDialog", "Verbose output", Q_NULLPTR));
        checkSameFilesystem->setText(QApplication::translate("TransferDialog", "Don't cross filesystem boundaries", Q_NULLPTR));
        checkDontUpdateModified->setText(QApplication::translate("TransferDialog", "Don't update mod-time if files are identical", Q_NULLPTR));
        label_12->setText(QApplication::translate("TransferDialog", "Extra arguments:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("TransferDialog", "Settings", Q_NULLPTR));
        label_5->setText(QApplication::translate("TransferDialog", "Checkers", Q_NULLPTR));
        label->setText(QApplication::translate("TransferDialog", "Bandwidth (KiB/s or b|k|M|G suffix)", Q_NULLPTR));
        label_2->setText(QApplication::translate("TransferDialog", "Minimum size (KiB or b|k|M|G suffix)", Q_NULLPTR));
        label_6->setText(QApplication::translate("TransferDialog", "Minimum age (s or ms|s|m|h|d|w|M|y suffix)", Q_NULLPTR));
        label_3->setText(QApplication::translate("TransferDialog", "Maximum age (s or ms|s|m|h|d|w|M|y suffix)", Q_NULLPTR));
        label_4->setText(QApplication::translate("TransferDialog", "Maximum depth", Q_NULLPTR));
        label_8->setText(QApplication::translate("TransferDialog", "Connect timeout", Q_NULLPTR));
        label_7->setText(QApplication::translate("TransferDialog", "IO idle timeout", Q_NULLPTR));
        label_9->setText(QApplication::translate("TransferDialog", "Retries", Q_NULLPTR));
        label_10->setText(QApplication::translate("TransferDialog", "Low level retries", Q_NULLPTR));
        label_11->setText(QApplication::translate("TransferDialog", "Transfers", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("TransferDialog", "Transfer", Q_NULLPTR));
        checkDeleteExcluded->setText(QApplication::translate("TransferDialog", "Delete excluded files from destination", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab4), QApplication::translate("TransferDialog", "Exclude", Q_NULLPTR));
        Q_UNUSED(TransferDialog);
    } // retranslateUi

};

namespace Ui {
    class TransferDialog: public Ui_TransferDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_DIALOG_H
