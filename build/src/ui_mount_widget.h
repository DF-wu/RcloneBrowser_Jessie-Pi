/********************************************************************************
** Form generated from reading UI file 'mount_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUNT_WIDGET_H
#define UI_MOUNT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MountWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *showDetails;
    QLabel *info;
    QToolButton *cancel;
    QWidget *details;
    QGridLayout *gridLayout_2;
    QLineEdit *folder;
    QLineEdit *remote;
    QToolButton *showOutput;
    QPlainTextEdit *output;
    QLabel *label_2;
    QLabel *label_1;

    void setupUi(QWidget *MountWidget)
    {
        if (MountWidget->objectName().isEmpty())
            MountWidget->setObjectName(QStringLiteral("MountWidget"));
        MountWidget->resize(654, 280);
        verticalLayout = new QVBoxLayout(MountWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(MountWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        showDetails = new QToolButton(widget);
        showDetails->setObjectName(QStringLiteral("showDetails"));
        showDetails->setCheckable(true);
        showDetails->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        showDetails->setArrowType(Qt::RightArrow);

        horizontalLayout->addWidget(showDetails);

        info = new QLabel(widget);
        info->setObjectName(QStringLiteral("info"));

        horizontalLayout->addWidget(info);

        cancel = new QToolButton(widget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setStyleSheet(QStringLiteral("QToolButton { border: 0 }"));

        horizontalLayout->addWidget(cancel);


        verticalLayout->addWidget(widget);

        details = new QWidget(MountWidget);
        details->setObjectName(QStringLiteral("details"));
        gridLayout_2 = new QGridLayout(details);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 0, 0);
        folder = new QLineEdit(details);
        folder->setObjectName(QStringLiteral("folder"));
        folder->setReadOnly(true);

        gridLayout_2->addWidget(folder, 1, 1, 1, 2);

        remote = new QLineEdit(details);
        remote->setObjectName(QStringLiteral("remote"));
        remote->setReadOnly(true);

        gridLayout_2->addWidget(remote, 0, 1, 1, 2);

        showOutput = new QToolButton(details);
        showOutput->setObjectName(QStringLiteral("showOutput"));
        showOutput->setStyleSheet(QStringLiteral("QToolButton { border: 0 }"));
        showOutput->setCheckable(true);
        showOutput->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        showOutput->setArrowType(Qt::RightArrow);

        gridLayout_2->addWidget(showOutput, 2, 0, 1, 2);

        output = new QPlainTextEdit(details);
        output->setObjectName(QStringLiteral("output"));
        output->setLineWrapMode(QPlainTextEdit::NoWrap);
        output->setReadOnly(true);

        gridLayout_2->addWidget(output, 3, 0, 1, 3);

        label_2 = new QLabel(details);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_1 = new QLabel(details);
        label_1->setObjectName(QStringLiteral("label_1"));
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_1, 0, 0, 1, 1);


        verticalLayout->addWidget(details);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(folder);
        label_1->setBuddy(remote);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(showDetails, cancel);
        QWidget::setTabOrder(cancel, remote);
        QWidget::setTabOrder(remote, folder);
        QWidget::setTabOrder(folder, showOutput);
        QWidget::setTabOrder(showOutput, output);

        retranslateUi(MountWidget);

        QMetaObject::connectSlotsByName(MountWidget);
    } // setupUi

    void retranslateUi(QWidget *MountWidget)
    {
        MountWidget->setWindowTitle(QApplication::translate("MountWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cancel->setToolTip(QApplication::translate("MountWidget", "Unmount", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cancel->setText(QString());
        showOutput->setText(QApplication::translate("MountWidget", "Show Output", Q_NULLPTR));
        label_2->setText(QApplication::translate("MountWidget", "Folder:", Q_NULLPTR));
        label_1->setText(QApplication::translate("MountWidget", "Remote:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MountWidget: public Ui_MountWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUNT_WIDGET_H
