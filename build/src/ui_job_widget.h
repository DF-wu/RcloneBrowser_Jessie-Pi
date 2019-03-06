/********************************************************************************
** Form generated from reading UI file 'job_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOB_WIDGET_H
#define UI_JOB_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JobWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *showDetails;
    QLabel *info;
    QToolButton *copy;
    QToolButton *cancel;
    QWidget *details;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *transferred;
    QLineEdit *errors;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QLineEdit *size;
    QLineEdit *dest;
    QLabel *label_5;
    QLineEdit *source;
    QToolButton *showOutput;
    QLabel *label_2;
    QLabel *label_4;
    QPlainTextEdit *output;
    QLineEdit *bandwidth;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *elapsed;
    QLineEdit *checks;
    QFormLayout *progress;

    void setupUi(QWidget *JobWidget)
    {
        if (JobWidget->objectName().isEmpty())
            JobWidget->setObjectName(QStringLiteral("JobWidget"));
        JobWidget->resize(832, 449);
        verticalLayout = new QVBoxLayout(JobWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(JobWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        showDetails = new QToolButton(widget);
        showDetails->setObjectName(QStringLiteral("showDetails"));
        showDetails->setStyleSheet(QStringLiteral("QToolButton { border: 0 }"));
        showDetails->setCheckable(true);
        showDetails->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        showDetails->setArrowType(Qt::RightArrow);

        horizontalLayout->addWidget(showDetails);

        info = new QLabel(widget);
        info->setObjectName(QStringLiteral("info"));

        horizontalLayout->addWidget(info);

        copy = new QToolButton(widget);
        copy->setObjectName(QStringLiteral("copy"));
        copy->setStyleSheet(QStringLiteral("QToolButton { border: 0 }"));

        horizontalLayout->addWidget(copy);

        cancel = new QToolButton(widget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setStyleSheet(QStringLiteral("QToolButton { border: 0 }"));

        horizontalLayout->addWidget(cancel);


        verticalLayout->addWidget(widget);

        details = new QWidget(JobWidget);
        details->setObjectName(QStringLiteral("details"));
        gridLayout_2 = new QGridLayout(details);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 7, 2, 1);

        transferred = new QLineEdit(details);
        transferred->setObjectName(QStringLiteral("transferred"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transferred->sizePolicy().hasHeightForWidth());
        transferred->setSizePolicy(sizePolicy);
        transferred->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        transferred->setReadOnly(true);

        gridLayout_2->addWidget(transferred, 3, 1, 1, 1);

        errors = new QLineEdit(details);
        errors->setObjectName(QStringLiteral("errors"));
        sizePolicy.setHeightForWidth(errors->sizePolicy().hasHeightForWidth());
        errors->setSizePolicy(sizePolicy);
        errors->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        errors->setReadOnly(true);

        gridLayout_2->addWidget(errors, 3, 3, 1, 1);

        label_7 = new QLabel(details);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 3, 2, 1, 1);

        label_8 = new QLabel(details);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 4, 1, 1);

        label_6 = new QLabel(details);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 2, 1, 1);

        size = new QLineEdit(details);
        size->setObjectName(QStringLiteral("size"));
        sizePolicy.setHeightForWidth(size->sizePolicy().hasHeightForWidth());
        size->setSizePolicy(sizePolicy);
        size->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        size->setReadOnly(true);

        gridLayout_2->addWidget(size, 2, 1, 1, 1);

        dest = new QLineEdit(details);
        dest->setObjectName(QStringLiteral("dest"));
        dest->setReadOnly(true);

        gridLayout_2->addWidget(dest, 1, 1, 1, 7);

        label_5 = new QLabel(details);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        source = new QLineEdit(details);
        source->setObjectName(QStringLiteral("source"));
        source->setReadOnly(true);

        gridLayout_2->addWidget(source, 0, 1, 1, 7);

        showOutput = new QToolButton(details);
        showOutput->setObjectName(QStringLiteral("showOutput"));
        showOutput->setStyleSheet(QStringLiteral("QToolButton { border: 0 }"));
        showOutput->setCheckable(true);
        showOutput->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        showOutput->setArrowType(Qt::RightArrow);

        gridLayout_2->addWidget(showOutput, 5, 0, 1, 2);

        label_2 = new QLabel(details);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 4, 1, 1);

        label_4 = new QLabel(details);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        output = new QPlainTextEdit(details);
        output->setObjectName(QStringLiteral("output"));
        output->setLineWrapMode(QPlainTextEdit::NoWrap);
        output->setReadOnly(true);

        gridLayout_2->addWidget(output, 6, 0, 1, 8);

        bandwidth = new QLineEdit(details);
        bandwidth->setObjectName(QStringLiteral("bandwidth"));
        sizePolicy.setHeightForWidth(bandwidth->sizePolicy().hasHeightForWidth());
        bandwidth->setSizePolicy(sizePolicy);
        bandwidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bandwidth->setReadOnly(true);

        gridLayout_2->addWidget(bandwidth, 2, 3, 1, 1);

        label_3 = new QLabel(details);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(details);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        elapsed = new QLineEdit(details);
        elapsed->setObjectName(QStringLiteral("elapsed"));
        sizePolicy.setHeightForWidth(elapsed->sizePolicy().hasHeightForWidth());
        elapsed->setSizePolicy(sizePolicy);
        elapsed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        elapsed->setReadOnly(true);

        gridLayout_2->addWidget(elapsed, 2, 5, 1, 1);

        checks = new QLineEdit(details);
        checks->setObjectName(QStringLiteral("checks"));
        sizePolicy.setHeightForWidth(checks->sizePolicy().hasHeightForWidth());
        checks->setSizePolicy(sizePolicy);
        checks->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checks->setReadOnly(true);

        gridLayout_2->addWidget(checks, 3, 5, 1, 1);

        progress = new QFormLayout();
        progress->setObjectName(QStringLiteral("progress"));
        progress->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        progress->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addLayout(progress, 4, 0, 1, 8);


        verticalLayout->addWidget(details);

#ifndef QT_NO_SHORTCUT
        label_7->setBuddy(errors);
        label_8->setBuddy(checks);
        label_6->setBuddy(bandwidth);
        label_5->setBuddy(size);
        label_2->setBuddy(elapsed);
        label_4->setBuddy(transferred);
        label_3->setBuddy(source);
        label->setBuddy(dest);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(showDetails, cancel);
        QWidget::setTabOrder(cancel, source);
        QWidget::setTabOrder(source, dest);
        QWidget::setTabOrder(dest, size);
        QWidget::setTabOrder(size, bandwidth);
        QWidget::setTabOrder(bandwidth, elapsed);
        QWidget::setTabOrder(elapsed, showOutput);
        QWidget::setTabOrder(showOutput, output);

        retranslateUi(JobWidget);

        QMetaObject::connectSlotsByName(JobWidget);
    } // setupUi

    void retranslateUi(QWidget *JobWidget)
    {
        JobWidget->setWindowTitle(QApplication::translate("JobWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        copy->setToolTip(QApplication::translate("JobWidget", "Copy command to clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cancel->setToolTip(QApplication::translate("JobWidget", "Cancel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("JobWidget", "Errors:", Q_NULLPTR));
        label_8->setText(QApplication::translate("JobWidget", "Checks:", Q_NULLPTR));
        label_6->setText(QApplication::translate("JobWidget", "Bandwidth:", Q_NULLPTR));
        label_5->setText(QApplication::translate("JobWidget", "Size:", Q_NULLPTR));
        showOutput->setText(QApplication::translate("JobWidget", "Show Output", Q_NULLPTR));
        label_2->setText(QApplication::translate("JobWidget", "Elapsed time:", Q_NULLPTR));
        label_4->setText(QApplication::translate("JobWidget", "Transferred:", Q_NULLPTR));
        label_3->setText(QApplication::translate("JobWidget", "Source:", Q_NULLPTR));
        label->setText(QApplication::translate("JobWidget", "Destination:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class JobWidget: public Ui_JobWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOB_WIDGET_H
