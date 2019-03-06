/********************************************************************************
** Form generated from reading UI file 'preferences_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_DIALOG_H
#define UI_PREFERENCES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QToolButton *rcloneBrowse;
    QLabel *label_1;
    QLineEdit *stream;
    QLineEdit *mount;
    QLineEdit *rclone;
    QLabel *mountLabel;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *rcloneConf;
    QToolButton *rcloneConfBrowse;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *alwaysShowInTray;
    QCheckBox *closeToTray;
    QCheckBox *notifyFinishedTransfers;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *info;
    QCheckBox *showFolderIcons;
    QCheckBox *rowColors;
    QCheckBox *showFileIcons;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(475, 407);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(PreferencesDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        rcloneBrowse = new QToolButton(groupBox_2);
        rcloneBrowse->setObjectName(QStringLiteral("rcloneBrowse"));

        gridLayout_3->addWidget(rcloneBrowse, 0, 2, 1, 1);

        label_1 = new QLabel(groupBox_2);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout_3->addWidget(label_1, 0, 0, 1, 1);

        stream = new QLineEdit(groupBox_2);
        stream->setObjectName(QStringLiteral("stream"));

        gridLayout_3->addWidget(stream, 2, 1, 1, 1);

        mount = new QLineEdit(groupBox_2);
        mount->setObjectName(QStringLiteral("mount"));

        gridLayout_3->addWidget(mount, 5, 1, 1, 1);

        rclone = new QLineEdit(groupBox_2);
        rclone->setObjectName(QStringLiteral("rclone"));

        gridLayout_3->addWidget(rclone, 0, 1, 1, 1);

        mountLabel = new QLabel(groupBox_2);
        mountLabel->setObjectName(QStringLiteral("mountLabel"));

        gridLayout_3->addWidget(mountLabel, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        rcloneConf = new QLineEdit(groupBox_2);
        rcloneConf->setObjectName(QStringLiteral("rcloneConf"));

        gridLayout_3->addWidget(rcloneConf, 1, 1, 1, 1);

        rcloneConfBrowse = new QToolButton(groupBox_2);
        rcloneConfBrowse->setObjectName(QStringLiteral("rcloneConfBrowse"));

        gridLayout_3->addWidget(rcloneConfBrowse, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(PreferencesDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        alwaysShowInTray = new QCheckBox(groupBox_3);
        alwaysShowInTray->setObjectName(QStringLiteral("alwaysShowInTray"));

        verticalLayout_2->addWidget(alwaysShowInTray);

        closeToTray = new QCheckBox(groupBox_3);
        closeToTray->setObjectName(QStringLiteral("closeToTray"));

        verticalLayout_2->addWidget(closeToTray);

        notifyFinishedTransfers = new QCheckBox(groupBox_3);
        notifyFinishedTransfers->setObjectName(QStringLiteral("notifyFinishedTransfers"));

        verticalLayout_2->addWidget(notifyFinishedTransfers);


        verticalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(PreferencesDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        info = new QLabel(groupBox);
        info->setObjectName(QStringLiteral("info"));

        gridLayout->addWidget(info, 3, 0, 1, 3);

        showFolderIcons = new QCheckBox(groupBox);
        showFolderIcons->setObjectName(QStringLiteral("showFolderIcons"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(showFolderIcons->sizePolicy().hasHeightForWidth());
        showFolderIcons->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(showFolderIcons, 0, 0, 1, 2);

        rowColors = new QCheckBox(groupBox);
        rowColors->setObjectName(QStringLiteral("rowColors"));

        gridLayout->addWidget(rowColors, 2, 0, 1, 2);

        showFileIcons = new QCheckBox(groupBox);
        showFileIcons->setObjectName(QStringLiteral("showFileIcons"));
        sizePolicy1.setHeightForWidth(showFileIcons->sizePolicy().hasHeightForWidth());
        showFileIcons->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(showFileIcons, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_1->setBuddy(rclone);
        mountLabel->setBuddy(mount);
        label_2->setBuddy(stream);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(rclone, rcloneBrowse);
        QWidget::setTabOrder(rcloneBrowse, rcloneConf);
        QWidget::setTabOrder(rcloneConf, rcloneConfBrowse);
        QWidget::setTabOrder(rcloneConfBrowse, stream);
        QWidget::setTabOrder(stream, mount);
        QWidget::setTabOrder(mount, alwaysShowInTray);
        QWidget::setTabOrder(alwaysShowInTray, closeToTray);
        QWidget::setTabOrder(closeToTray, notifyFinishedTransfers);
        QWidget::setTabOrder(notifyFinishedTransfers, showFolderIcons);
        QWidget::setTabOrder(showFolderIcons, showFileIcons);
        QWidget::setTabOrder(showFileIcons, rowColors);

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("PreferencesDialog", "Settings", Q_NULLPTR));
        rcloneBrowse->setText(QApplication::translate("PreferencesDialog", "...", Q_NULLPTR));
        label_1->setText(QApplication::translate("PreferencesDialog", "rclone location:", Q_NULLPTR));
        mountLabel->setText(QApplication::translate("PreferencesDialog", "Mount options:", Q_NULLPTR));
        label_2->setText(QApplication::translate("PreferencesDialog", "Stream command:", Q_NULLPTR));
        label->setText(QApplication::translate("PreferencesDialog", ".rclone.conf location:", Q_NULLPTR));
        rcloneConfBrowse->setText(QApplication::translate("PreferencesDialog", "...", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("PreferencesDialog", "System Tray", Q_NULLPTR));
        alwaysShowInTray->setText(QApplication::translate("PreferencesDialog", "Always show in system tray", Q_NULLPTR));
        closeToTray->setText(QApplication::translate("PreferencesDialog", "Close to system tray", Q_NULLPTR));
        notifyFinishedTransfers->setText(QApplication::translate("PreferencesDialog", "Notify about finished transfers", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PreferencesDialog", "User Interface", Q_NULLPTR));
        info->setText(QApplication::translate("PreferencesDialog", "Changing these options will require reopening remote tab.", Q_NULLPTR));
        showFolderIcons->setText(QApplication::translate("PreferencesDialog", "Show folder icons", Q_NULLPTR));
        rowColors->setText(QApplication::translate("PreferencesDialog", "Alternating row colors", Q_NULLPTR));
        showFileIcons->setText(QApplication::translate("PreferencesDialog", "Show file icons", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_DIALOG_H
