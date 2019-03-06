/********************************************************************************
** Form generated from reading UI file 'remote_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTE_WIDGET_H
#define UI_REMOTE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoteWidget
{
public:
    QAction *refresh;
    QAction *mount;
    QAction *stream;
    QAction *mkdir;
    QAction *rename;
    QAction *purge;
    QAction *upload;
    QAction *download;
    QAction *getSize;
    QAction *export_;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *layout;
    QVBoxLayout *verticalLayout;
    QWidget *buttons;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *buttonRefresh;
    QToolButton *buttonMkdir;
    QToolButton *buttonRename;
    QToolButton *buttonPurge;
    QToolButton *buttonMount;
    QToolButton *buttonStream;
    QToolButton *buttonUpload;
    QToolButton *buttonDownload;
    QToolButton *buttonSize;
    QToolButton *buttonExport;
    QSpacerItem *spacer;
    QLineEdit *path;
    QTreeView *tree;

    void setupUi(QWidget *RemoteWidget)
    {
        if (RemoteWidget->objectName().isEmpty())
            RemoteWidget->setObjectName(QStringLiteral("RemoteWidget"));
        RemoteWidget->resize(784, 552);
        refresh = new QAction(RemoteWidget);
        refresh->setObjectName(QStringLiteral("refresh"));
        mount = new QAction(RemoteWidget);
        mount->setObjectName(QStringLiteral("mount"));
        stream = new QAction(RemoteWidget);
        stream->setObjectName(QStringLiteral("stream"));
        mkdir = new QAction(RemoteWidget);
        mkdir->setObjectName(QStringLiteral("mkdir"));
        rename = new QAction(RemoteWidget);
        rename->setObjectName(QStringLiteral("rename"));
        purge = new QAction(RemoteWidget);
        purge->setObjectName(QStringLiteral("purge"));
        upload = new QAction(RemoteWidget);
        upload->setObjectName(QStringLiteral("upload"));
        download = new QAction(RemoteWidget);
        download->setObjectName(QStringLiteral("download"));
        getSize = new QAction(RemoteWidget);
        getSize->setObjectName(QStringLiteral("getSize"));
        export_ = new QAction(RemoteWidget);
        export_->setObjectName(QStringLiteral("export_"));
        horizontalLayout = new QHBoxLayout(RemoteWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(RemoteWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        layout = new QWidget(splitter);
        layout->setObjectName(QStringLiteral("layout"));
        verticalLayout = new QVBoxLayout(layout);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttons = new QWidget(layout);
        buttons->setObjectName(QStringLiteral("buttons"));
        horizontalLayout_2 = new QHBoxLayout(buttons);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonRefresh = new QToolButton(buttons);
        buttonRefresh->setObjectName(QStringLiteral("buttonRefresh"));
        buttonRefresh->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonRefresh);

        buttonMkdir = new QToolButton(buttons);
        buttonMkdir->setObjectName(QStringLiteral("buttonMkdir"));
        buttonMkdir->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonMkdir);

        buttonRename = new QToolButton(buttons);
        buttonRename->setObjectName(QStringLiteral("buttonRename"));
        buttonRename->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonRename);

        buttonPurge = new QToolButton(buttons);
        buttonPurge->setObjectName(QStringLiteral("buttonPurge"));
        buttonPurge->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonPurge);

        buttonMount = new QToolButton(buttons);
        buttonMount->setObjectName(QStringLiteral("buttonMount"));
        buttonMount->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonMount);

        buttonStream = new QToolButton(buttons);
        buttonStream->setObjectName(QStringLiteral("buttonStream"));
        buttonStream->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonStream);

        buttonUpload = new QToolButton(buttons);
        buttonUpload->setObjectName(QStringLiteral("buttonUpload"));
        buttonUpload->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonUpload);

        buttonDownload = new QToolButton(buttons);
        buttonDownload->setObjectName(QStringLiteral("buttonDownload"));
        buttonDownload->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonDownload);

        buttonSize = new QToolButton(buttons);
        buttonSize->setObjectName(QStringLiteral("buttonSize"));
        buttonSize->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonSize);

        buttonExport = new QToolButton(buttons);
        buttonExport->setObjectName(QStringLiteral("buttonExport"));
        buttonExport->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(buttonExport);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer);


        verticalLayout->addWidget(buttons);

        path = new QLineEdit(layout);
        path->setObjectName(QStringLiteral("path"));
        path->setReadOnly(true);

        verticalLayout->addWidget(path);

        tree = new QTreeView(layout);
        tree->setObjectName(QStringLiteral("tree"));
        tree->setContextMenuPolicy(Qt::CustomContextMenu);
        tree->setAcceptDrops(true);
        tree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tree->setDragDropOverwriteMode(true);
        tree->setDefaultDropAction(Qt::CopyAction);
        tree->setSelectionMode(QAbstractItemView::SingleSelection);
        tree->setSelectionBehavior(QAbstractItemView::SelectRows);
        tree->setUniformRowHeights(true);
        tree->setSortingEnabled(true);
        tree->header()->setStretchLastSection(false);

        verticalLayout->addWidget(tree);

        splitter->addWidget(layout);

        horizontalLayout->addWidget(splitter);

        QWidget::setTabOrder(buttonRefresh, buttonMkdir);
        QWidget::setTabOrder(buttonMkdir, buttonRename);
        QWidget::setTabOrder(buttonRename, buttonPurge);
        QWidget::setTabOrder(buttonPurge, buttonMount);
        QWidget::setTabOrder(buttonMount, buttonStream);
        QWidget::setTabOrder(buttonStream, buttonUpload);
        QWidget::setTabOrder(buttonUpload, buttonDownload);
        QWidget::setTabOrder(buttonDownload, buttonSize);
        QWidget::setTabOrder(buttonSize, path);
        QWidget::setTabOrder(path, tree);

        retranslateUi(RemoteWidget);

        QMetaObject::connectSlotsByName(RemoteWidget);
    } // setupUi

    void retranslateUi(QWidget *RemoteWidget)
    {
        RemoteWidget->setWindowTitle(QApplication::translate("RemoteWidget", "Form", Q_NULLPTR));
        refresh->setText(QApplication::translate("RemoteWidget", "&Refresh", Q_NULLPTR));
        refresh->setShortcut(QApplication::translate("RemoteWidget", "F5", Q_NULLPTR));
        mount->setText(QApplication::translate("RemoteWidget", "&Mount", Q_NULLPTR));
        stream->setText(QApplication::translate("RemoteWidget", "&Stream", Q_NULLPTR));
        mkdir->setText(QApplication::translate("RemoteWidget", "&New Folder", Q_NULLPTR));
        mkdir->setShortcut(QApplication::translate("RemoteWidget", "F7", Q_NULLPTR));
        rename->setText(QApplication::translate("RemoteWidget", "R&ename", Q_NULLPTR));
        rename->setShortcut(QApplication::translate("RemoteWidget", "F2", Q_NULLPTR));
        purge->setText(QApplication::translate("RemoteWidget", "De&lete", Q_NULLPTR));
        purge->setShortcut(QApplication::translate("RemoteWidget", "Del", Q_NULLPTR));
        upload->setText(QApplication::translate("RemoteWidget", "&Upload", Q_NULLPTR));
        download->setText(QApplication::translate("RemoteWidget", "&Download", Q_NULLPTR));
        getSize->setText(QApplication::translate("RemoteWidget", "&Get Size", Q_NULLPTR));
        export_->setText(QApplication::translate("RemoteWidget", "E&xport", Q_NULLPTR));
        buttonRefresh->setText(QApplication::translate("RemoteWidget", "&Refresh", Q_NULLPTR));
        buttonMkdir->setText(QApplication::translate("RemoteWidget", "&New Folder", Q_NULLPTR));
        buttonRename->setText(QApplication::translate("RemoteWidget", "R&ename", Q_NULLPTR));
        buttonPurge->setText(QApplication::translate("RemoteWidget", "De&lete", Q_NULLPTR));
        buttonMount->setText(QApplication::translate("RemoteWidget", "&Mount", Q_NULLPTR));
        buttonStream->setText(QApplication::translate("RemoteWidget", "&Stream", Q_NULLPTR));
        buttonUpload->setText(QApplication::translate("RemoteWidget", "&Upload...", Q_NULLPTR));
        buttonDownload->setText(QApplication::translate("RemoteWidget", "&Download...", Q_NULLPTR));
        buttonSize->setText(QApplication::translate("RemoteWidget", "&Get Size...", Q_NULLPTR));
        buttonExport->setText(QApplication::translate("RemoteWidget", "E&xport...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RemoteWidget: public Ui_RemoteWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTE_WIDGET_H
