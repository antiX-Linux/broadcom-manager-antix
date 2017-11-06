/********************************************************************************
** Form generated from reading UI file 'meconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MECONFIG_H
#define UI_MECONFIG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MEConfig
{
public:
    QGridLayout *gridLayout_4;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonAbout;
    QPushButton *generalHelpPushButton;
    QSpacerItem *spacerLeft;
    QLabel *antix_globe_3_png;
    QSpacerItem *spacerRight;
    QPushButton *buttonCancel;
    QTabWidget *tabWidget;
    QWidget *introductionTab;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBoxIntroduction;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelIntroduction;
    QGroupBox *hardwaregroupBox;
    QGridLayout *gridLayout_6;
    QPushButton *hwDiagnosePushButton;
    QSpacerItem *horizontalSpacer;
    QListWidget *hwList;
    QPushButton *hwUnblock;
    QWidget *linuxTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxLinux;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelLinux;
    QGroupBox *driversGroupBox;
    QGridLayout *gridLayout_3;
    QPushButton *linuxDrvLoad;
    QListWidget *linuxDrvList;
    QPushButton *linuxDrvUnload;
    QPushButton *linuxDrvDiagnosePushButton;
    QPushButton *linuxDrvBlacklistPushButton;
    QWidget *windowsTab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxWindows;
    QGridLayout *gridLayout_7;
    QPushButton *installNdiswrapper;
    QLabel *labelNdiswrapper;
    QPushButton *uninstallNdiswrapper;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QListWidget *windowsDrvList;
    QPushButton *windowsDrvRemovePushButton;
    QPushButton *windowsDrvAddPushButton;
    QPushButton *windowsDrvDiagnosePushButton;
    QWidget *diagnosticsTab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelIP;
    QLabel *labelRouterIP;
    QGroupBox *pingGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *labelPingURL;
    QLineEdit *pingHostEdit;
    QLabel *labelPackets;
    QSpinBox *pingPacketNumber;
    QTextEdit *pingOutputEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pingButton;
    QPushButton *clearPingOutput;
    QPushButton *cancelPing;
    QGroupBox *tracerouteGroupBox;
    QGridLayout *gridLayout;
    QLabel *labelURL;
    QLineEdit *tracerouteHostEdit;
    QLabel *labelHops;
    QSpinBox *traceHopsNumber;
    QTextEdit *tracerouteOutputEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *tracerouteButton;
    QPushButton *clearTraceOutput;
    QPushButton *cancelTrace;

    void setupUi(QDialog *MEConfig)
    {
        if (MEConfig->objectName().isEmpty())
            MEConfig->setObjectName(QStringLiteral("MEConfig"));
        MEConfig->resize(712, 537);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MEConfig->sizePolicy().hasHeightForWidth());
        MEConfig->setSizePolicy(sizePolicy);
        MEConfig->setMinimumSize(QSize(0, 537));
        MEConfig->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MEConfig->setSizeGripEnabled(false);
        gridLayout_4 = new QGridLayout(MEConfig);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(9, 9, 9, 9);
        line = new QFrame(MEConfig);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        gridLayout_4->addWidget(line, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        buttonAbout = new QPushButton(MEConfig);
        buttonAbout->setObjectName(QStringLiteral("buttonAbout"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/accessories-text-editor.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAbout->setIcon(icon);
        buttonAbout->setAutoDefault(true);

        horizontalLayout_3->addWidget(buttonAbout);

        generalHelpPushButton = new QPushButton(MEConfig);
        generalHelpPushButton->setObjectName(QStringLiteral("generalHelpPushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/gnome-help.png"), QSize(), QIcon::Normal, QIcon::Off);
        generalHelpPushButton->setIcon(icon1);

        horizontalLayout_3->addWidget(generalHelpPushButton);

        spacerLeft = new QSpacerItem(116, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerLeft);

        antix_globe_3_png = new QLabel(MEConfig);
        antix_globe_3_png->setObjectName(QStringLiteral("antix_globe_3_png"));
        antix_globe_3_png->setMaximumSize(QSize(32, 32));
        antix_globe_3_png->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        antix_globe_3_png->setPixmap(QPixmap(QString::fromUtf8("../../../../../../../../usr/share/broadcom-manager/icons/antix-globe-3.png")));
        antix_globe_3_png->setScaledContents(true);

        horizontalLayout_3->addWidget(antix_globe_3_png);

        spacerRight = new QSpacerItem(75, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerRight);

        buttonCancel = new QPushButton(MEConfig);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/gtk-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonCancel->setIcon(icon2);
        buttonCancel->setAutoDefault(true);

        horizontalLayout_3->addWidget(buttonCancel);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        tabWidget = new QTabWidget(MEConfig);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        tabWidget->setElideMode(Qt::ElideNone);
        introductionTab = new QWidget();
        introductionTab->setObjectName(QStringLiteral("introductionTab"));
        vboxLayout = new QVBoxLayout(introductionTab);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBoxIntroduction = new QGroupBox(introductionTab);
        groupBoxIntroduction->setObjectName(QStringLiteral("groupBoxIntroduction"));
        verticalLayout_3 = new QVBoxLayout(groupBoxIntroduction);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelIntroduction = new QLabel(groupBoxIntroduction);
        labelIntroduction->setObjectName(QStringLiteral("labelIntroduction"));
        labelIntroduction->setTextFormat(Qt::RichText);
        labelIntroduction->setWordWrap(true);

        verticalLayout_3->addWidget(labelIntroduction);


        vboxLayout->addWidget(groupBoxIntroduction);

        hardwaregroupBox = new QGroupBox(introductionTab);
        hardwaregroupBox->setObjectName(QStringLiteral("hardwaregroupBox"));
        gridLayout_6 = new QGridLayout(hardwaregroupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        hwDiagnosePushButton = new QPushButton(hardwaregroupBox);
        hwDiagnosePushButton->setObjectName(QStringLiteral("hwDiagnosePushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hwDiagnosePushButton->sizePolicy().hasHeightForWidth());
        hwDiagnosePushButton->setSizePolicy(sizePolicy2);
        hwDiagnosePushButton->setMaximumSize(QSize(180, 16777215));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        hwDiagnosePushButton->setIcon(icon3);

        gridLayout_6->addWidget(hwDiagnosePushButton, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 1, 2, 1, 1);

        hwList = new QListWidget(hardwaregroupBox);
        hwList->setObjectName(QStringLiteral("hwList"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(hwList->sizePolicy().hasHeightForWidth());
        hwList->setSizePolicy(sizePolicy3);
        hwList->setMinimumSize(QSize(0, 65));
        hwList->setMaximumSize(QSize(16777215, 500));
        hwList->setMouseTracking(true);
        hwList->setFocusPolicy(Qt::StrongFocus);
        hwList->setContextMenuPolicy(Qt::CustomContextMenu);
        hwList->setLayoutDirection(Qt::LeftToRight);
        hwList->setAutoFillBackground(false);
        hwList->setAutoScroll(true);
        hwList->setSelectionMode(QAbstractItemView::SingleSelection);
        hwList->setTextElideMode(Qt::ElideLeft);
        hwList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        hwList->setViewMode(QListView::ListMode);
        hwList->setModelColumn(0);
        hwList->setUniformItemSizes(true);

        gridLayout_6->addWidget(hwList, 0, 0, 1, 3);

        hwUnblock = new QPushButton(hardwaregroupBox);
        hwUnblock->setObjectName(QStringLiteral("hwUnblock"));
        sizePolicy2.setHeightForWidth(hwUnblock->sizePolicy().hasHeightForWidth());
        hwUnblock->setSizePolicy(sizePolicy2);
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/network-wireless.png"), QSize(), QIcon::Normal, QIcon::Off);
        hwUnblock->setIcon(icon4);

        gridLayout_6->addWidget(hwUnblock, 1, 1, 1, 1);


        vboxLayout->addWidget(hardwaregroupBox);

        tabWidget->addTab(introductionTab, icon, QString());
        linuxTab = new QWidget();
        linuxTab->setObjectName(QStringLiteral("linuxTab"));
        verticalLayout_2 = new QVBoxLayout(linuxTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBoxLinux = new QGroupBox(linuxTab);
        groupBoxLinux->setObjectName(QStringLiteral("groupBoxLinux"));
        verticalLayout_4 = new QVBoxLayout(groupBoxLinux);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelLinux = new QLabel(groupBoxLinux);
        labelLinux->setObjectName(QStringLiteral("labelLinux"));
        labelLinux->setWordWrap(true);

        verticalLayout_4->addWidget(labelLinux);


        verticalLayout_2->addWidget(groupBoxLinux);

        driversGroupBox = new QGroupBox(linuxTab);
        driversGroupBox->setObjectName(QStringLiteral("driversGroupBox"));
        driversGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(driversGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        linuxDrvLoad = new QPushButton(driversGroupBox);
        linuxDrvLoad->setObjectName(QStringLiteral("linuxDrvLoad"));
        linuxDrvLoad->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/connect_creating.png"), QSize(), QIcon::Normal, QIcon::Off);
        linuxDrvLoad->setIcon(icon5);

        gridLayout_3->addWidget(linuxDrvLoad, 3, 1, 1, 1);

        linuxDrvList = new QListWidget(driversGroupBox);
        linuxDrvList->setObjectName(QStringLiteral("linuxDrvList"));
        sizePolicy3.setHeightForWidth(linuxDrvList->sizePolicy().hasHeightForWidth());
        linuxDrvList->setSizePolicy(sizePolicy3);
        linuxDrvList->setMinimumSize(QSize(0, 65));
        linuxDrvList->setMaximumSize(QSize(16777215, 500));
        linuxDrvList->setContextMenuPolicy(Qt::CustomContextMenu);
        linuxDrvList->setLayoutDirection(Qt::LeftToRight);
        linuxDrvList->setAutoFillBackground(false);
        linuxDrvList->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        linuxDrvList->setSelectionMode(QAbstractItemView::SingleSelection);
        linuxDrvList->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        linuxDrvList->setViewMode(QListView::ListMode);
        linuxDrvList->setModelColumn(0);
        linuxDrvList->setUniformItemSizes(true);

        gridLayout_3->addWidget(linuxDrvList, 1, 0, 1, 4);

        linuxDrvUnload = new QPushButton(driversGroupBox);
        linuxDrvUnload->setObjectName(QStringLiteral("linuxDrvUnload"));
        linuxDrvUnload->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/connect_no.png"), QSize(), QIcon::Normal, QIcon::Off);
        linuxDrvUnload->setIcon(icon6);

        gridLayout_3->addWidget(linuxDrvUnload, 3, 2, 1, 1);

        linuxDrvDiagnosePushButton = new QPushButton(driversGroupBox);
        linuxDrvDiagnosePushButton->setObjectName(QStringLiteral("linuxDrvDiagnosePushButton"));
        linuxDrvDiagnosePushButton->setMaximumSize(QSize(180, 16777215));
        linuxDrvDiagnosePushButton->setIcon(icon3);

        gridLayout_3->addWidget(linuxDrvDiagnosePushButton, 3, 0, 1, 1);

        linuxDrvBlacklistPushButton = new QPushButton(driversGroupBox);
        linuxDrvBlacklistPushButton->setObjectName(QStringLiteral("linuxDrvBlacklistPushButton"));
        linuxDrvBlacklistPushButton->setEnabled(false);
        linuxDrvBlacklistPushButton->setMinimumSize(QSize(156, 0));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/file_locked.png"), QSize(), QIcon::Normal, QIcon::Off);
        linuxDrvBlacklistPushButton->setIcon(icon7);

        gridLayout_3->addWidget(linuxDrvBlacklistPushButton, 3, 3, 1, 1);


        verticalLayout_2->addWidget(driversGroupBox);

        QIcon icon8;
        icon8.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/tux.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(linuxTab, icon8, QString());
        windowsTab = new QWidget();
        windowsTab->setObjectName(QStringLiteral("windowsTab"));
        verticalLayout = new QVBoxLayout(windowsTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxWindows = new QGroupBox(windowsTab);
        groupBoxWindows->setObjectName(QStringLiteral("groupBoxWindows"));
        gridLayout_7 = new QGridLayout(groupBoxWindows);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        installNdiswrapper = new QPushButton(groupBoxWindows);
        installNdiswrapper->setObjectName(QStringLiteral("installNdiswrapper"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(installNdiswrapper->sizePolicy().hasHeightForWidth());
        installNdiswrapper->setSizePolicy(sizePolicy4);
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        installNdiswrapper->setIcon(icon9);

        gridLayout_7->addWidget(installNdiswrapper, 1, 0, 1, 1);

        labelNdiswrapper = new QLabel(groupBoxWindows);
        labelNdiswrapper->setObjectName(QStringLiteral("labelNdiswrapper"));
        labelNdiswrapper->setWordWrap(true);

        gridLayout_7->addWidget(labelNdiswrapper, 0, 0, 1, 3);

        uninstallNdiswrapper = new QPushButton(groupBoxWindows);
        uninstallNdiswrapper->setObjectName(QStringLiteral("uninstallNdiswrapper"));
        sizePolicy4.setHeightForWidth(uninstallNdiswrapper->sizePolicy().hasHeightForWidth());
        uninstallNdiswrapper->setSizePolicy(sizePolicy4);
        QIcon icon10;
        icon10.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        uninstallNdiswrapper->setIcon(icon10);

        gridLayout_7->addWidget(uninstallNdiswrapper, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBoxWindows);

        groupBox = new QGroupBox(windowsTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        windowsDrvList = new QListWidget(groupBox);
        windowsDrvList->setObjectName(QStringLiteral("windowsDrvList"));
        sizePolicy3.setHeightForWidth(windowsDrvList->sizePolicy().hasHeightForWidth());
        windowsDrvList->setSizePolicy(sizePolicy3);
        windowsDrvList->setMinimumSize(QSize(0, 65));
        windowsDrvList->setMaximumSize(QSize(16777215, 500));
        windowsDrvList->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout_5->addWidget(windowsDrvList, 0, 0, 1, 5);

        windowsDrvRemovePushButton = new QPushButton(groupBox);
        windowsDrvRemovePushButton->setObjectName(QStringLiteral("windowsDrvRemovePushButton"));
        windowsDrvRemovePushButton->setEnabled(false);
        windowsDrvRemovePushButton->setIcon(icon10);

        gridLayout_5->addWidget(windowsDrvRemovePushButton, 1, 2, 1, 1);

        windowsDrvAddPushButton = new QPushButton(groupBox);
        windowsDrvAddPushButton->setObjectName(QStringLiteral("windowsDrvAddPushButton"));
        windowsDrvAddPushButton->setIcon(icon9);

        gridLayout_5->addWidget(windowsDrvAddPushButton, 1, 1, 1, 1);

        windowsDrvDiagnosePushButton = new QPushButton(groupBox);
        windowsDrvDiagnosePushButton->setObjectName(QStringLiteral("windowsDrvDiagnosePushButton"));
        sizePolicy2.setHeightForWidth(windowsDrvDiagnosePushButton->sizePolicy().hasHeightForWidth());
        windowsDrvDiagnosePushButton->setSizePolicy(sizePolicy2);
        windowsDrvDiagnosePushButton->setMaximumSize(QSize(180, 16777215));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/samba.png"), QSize(), QIcon::Normal, QIcon::Off);
        windowsDrvDiagnosePushButton->setIcon(icon11);

        gridLayout_5->addWidget(windowsDrvDiagnosePushButton, 1, 0, 1, 1);

        windowsDrvList->raise();
        windowsDrvDiagnosePushButton->raise();
        windowsDrvAddPushButton->raise();
        windowsDrvRemovePushButton->raise();

        verticalLayout->addWidget(groupBox);

        tabWidget->addTab(windowsTab, icon11, QString());
        diagnosticsTab = new QWidget();
        diagnosticsTab->setObjectName(QStringLiteral("diagnosticsTab"));
        vboxLayout1 = new QVBoxLayout(diagnosticsTab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        groupBox_2 = new QGroupBox(diagnosticsTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelIP = new QLabel(groupBox_2);
        labelIP->setObjectName(QStringLiteral("labelIP"));

        verticalLayout_6->addWidget(labelIP);

        labelRouterIP = new QLabel(groupBox_2);
        labelRouterIP->setObjectName(QStringLiteral("labelRouterIP"));

        verticalLayout_6->addWidget(labelRouterIP);


        vboxLayout1->addWidget(groupBox_2);

        pingGroupBox = new QGroupBox(diagnosticsTab);
        pingGroupBox->setObjectName(QStringLiteral("pingGroupBox"));
        pingGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(pingGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelPingURL = new QLabel(pingGroupBox);
        labelPingURL->setObjectName(QStringLiteral("labelPingURL"));

        gridLayout_2->addWidget(labelPingURL, 0, 0, 1, 1);

        pingHostEdit = new QLineEdit(pingGroupBox);
        pingHostEdit->setObjectName(QStringLiteral("pingHostEdit"));

        gridLayout_2->addWidget(pingHostEdit, 0, 1, 1, 1);

        labelPackets = new QLabel(pingGroupBox);
        labelPackets->setObjectName(QStringLiteral("labelPackets"));

        gridLayout_2->addWidget(labelPackets, 0, 2, 1, 1);

        pingPacketNumber = new QSpinBox(pingGroupBox);
        pingPacketNumber->setObjectName(QStringLiteral("pingPacketNumber"));
        pingPacketNumber->setMinimum(1);
        pingPacketNumber->setValue(10);

        gridLayout_2->addWidget(pingPacketNumber, 0, 3, 1, 1);

        pingOutputEdit = new QTextEdit(pingGroupBox);
        pingOutputEdit->setObjectName(QStringLiteral("pingOutputEdit"));
        pingOutputEdit->setUndoRedoEnabled(false);
        pingOutputEdit->setLineWrapMode(QTextEdit::NoWrap);
        pingOutputEdit->setLineWrapColumnOrWidth(0);
        pingOutputEdit->setReadOnly(true);

        gridLayout_2->addWidget(pingOutputEdit, 1, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pingButton = new QPushButton(pingGroupBox);
        pingButton->setObjectName(QStringLiteral("pingButton"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pingButton->setIcon(icon12);

        horizontalLayout_2->addWidget(pingButton);

        clearPingOutput = new QPushButton(pingGroupBox);
        clearPingOutput->setObjectName(QStringLiteral("clearPingOutput"));
        clearPingOutput->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/emptytrash.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearPingOutput->setIcon(icon13);

        horizontalLayout_2->addWidget(clearPingOutput);

        cancelPing = new QPushButton(pingGroupBox);
        cancelPing->setObjectName(QStringLiteral("cancelPing"));
        cancelPing->setEnabled(false);
        cancelPing->setIcon(icon2);

        horizontalLayout_2->addWidget(cancelPing);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 2);


        vboxLayout1->addWidget(pingGroupBox);

        tracerouteGroupBox = new QGroupBox(diagnosticsTab);
        tracerouteGroupBox->setObjectName(QStringLiteral("tracerouteGroupBox"));
        tracerouteGroupBox->setMinimumSize(QSize(0, 0));
        tracerouteGroupBox->setBaseSize(QSize(0, 0));
        gridLayout = new QGridLayout(tracerouteGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelURL = new QLabel(tracerouteGroupBox);
        labelURL->setObjectName(QStringLiteral("labelURL"));

        gridLayout->addWidget(labelURL, 0, 0, 1, 1);

        tracerouteHostEdit = new QLineEdit(tracerouteGroupBox);
        tracerouteHostEdit->setObjectName(QStringLiteral("tracerouteHostEdit"));

        gridLayout->addWidget(tracerouteHostEdit, 0, 1, 1, 1);

        labelHops = new QLabel(tracerouteGroupBox);
        labelHops->setObjectName(QStringLiteral("labelHops"));

        gridLayout->addWidget(labelHops, 0, 2, 1, 1);

        traceHopsNumber = new QSpinBox(tracerouteGroupBox);
        traceHopsNumber->setObjectName(QStringLiteral("traceHopsNumber"));
        traceHopsNumber->setMinimum(1);
        traceHopsNumber->setValue(30);

        gridLayout->addWidget(traceHopsNumber, 0, 3, 1, 1);

        tracerouteOutputEdit = new QTextEdit(tracerouteGroupBox);
        tracerouteOutputEdit->setObjectName(QStringLiteral("tracerouteOutputEdit"));
        tracerouteOutputEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tracerouteOutputEdit->setUndoRedoEnabled(false);
        tracerouteOutputEdit->setLineWrapMode(QTextEdit::NoWrap);
        tracerouteOutputEdit->setLineWrapColumnOrWidth(0);
        tracerouteOutputEdit->setReadOnly(true);

        gridLayout->addWidget(tracerouteOutputEdit, 1, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tracerouteButton = new QPushButton(tracerouteGroupBox);
        tracerouteButton->setObjectName(QStringLiteral("tracerouteButton"));
        tracerouteButton->setIcon(icon12);

        horizontalLayout->addWidget(tracerouteButton);

        clearTraceOutput = new QPushButton(tracerouteGroupBox);
        clearTraceOutput->setObjectName(QStringLiteral("clearTraceOutput"));
        clearTraceOutput->setEnabled(false);
        clearTraceOutput->setIcon(icon13);

        horizontalLayout->addWidget(clearTraceOutput);

        cancelTrace = new QPushButton(tracerouteGroupBox);
        cancelTrace->setObjectName(QStringLiteral("cancelTrace"));
        cancelTrace->setEnabled(false);
        cancelTrace->setIcon(icon2);

        horizontalLayout->addWidget(cancelTrace);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        vboxLayout1->addWidget(tracerouteGroupBox);

        QIcon icon14;
        icon14.addFile(QStringLiteral("../../../../../../../../usr/share/broadcom-manager/icons/network-workgroup.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(diagnosticsTab, icon14, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidget, buttonAbout);
        QWidget::setTabOrder(buttonAbout, generalHelpPushButton);
        QWidget::setTabOrder(generalHelpPushButton, buttonCancel);
        QWidget::setTabOrder(buttonCancel, hwList);
        QWidget::setTabOrder(hwList, pingHostEdit);
        QWidget::setTabOrder(pingHostEdit, pingPacketNumber);
        QWidget::setTabOrder(pingPacketNumber, pingOutputEdit);
        QWidget::setTabOrder(pingOutputEdit, pingButton);
        QWidget::setTabOrder(pingButton, clearPingOutput);
        QWidget::setTabOrder(clearPingOutput, cancelPing);
        QWidget::setTabOrder(cancelPing, tracerouteHostEdit);
        QWidget::setTabOrder(tracerouteHostEdit, traceHopsNumber);
        QWidget::setTabOrder(traceHopsNumber, tracerouteOutputEdit);
        QWidget::setTabOrder(tracerouteOutputEdit, tracerouteButton);
        QWidget::setTabOrder(tracerouteButton, clearTraceOutput);
        QWidget::setTabOrder(clearTraceOutput, cancelTrace);

        retranslateUi(MEConfig);
        QObject::connect(pingHostEdit, SIGNAL(editingFinished()), pingButton, SLOT(setFocus()));
        QObject::connect(tracerouteHostEdit, SIGNAL(editingFinished()), tracerouteButton, SLOT(setFocus()));

        tabWidget->setCurrentIndex(0);
        pingButton->setDefault(false);
        tracerouteButton->setDefault(false);


        QMetaObject::connectSlotsByName(MEConfig);
    } // setupUi

    void retranslateUi(QDialog *MEConfig)
    {
        MEConfig->setWindowTitle(QApplication::translate("MEConfig", "Broadcom Manager", Q_NULLPTR));
        buttonAbout->setText(QApplication::translate("MEConfig", "About...", Q_NULLPTR));
        buttonAbout->setShortcut(QString());
        generalHelpPushButton->setText(QApplication::translate("MEConfig", "Help", Q_NULLPTR));
        antix_globe_3_png->setText(QString());
        buttonCancel->setText(QApplication::translate("MEConfig", "&Close", Q_NULLPTR));
        buttonCancel->setShortcut(QApplication::translate("MEConfig", "Alt+C", Q_NULLPTR));
        groupBoxIntroduction->setTitle(QApplication::translate("MEConfig", "Introduction", Q_NULLPTR));
        labelIntroduction->setText(QApplication::translate("MEConfig", "<html><head/><body><p>Broadcom wireless can sometimes be difficult to set up in Linux. There are a number of different types of drivers that have different capabilities and features.</p></body></html>", Q_NULLPTR));
        hardwaregroupBox->setTitle(QApplication::translate("MEConfig", "Hardware detected", Q_NULLPTR));
        hwDiagnosePushButton->setText(QApplication::translate("MEConfig", "Re-scan Hardware", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        hwUnblock->setToolTip(QApplication::translate("MEConfig", "Unblocks all soft/hard blocked wireless devices", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        hwUnblock->setText(QApplication::translate("MEConfig", "Unblock WiFi Devices", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(introductionTab), QApplication::translate("MEConfig", "Introduction", Q_NULLPTR));
        groupBoxLinux->setTitle(QApplication::translate("MEConfig", "Linux drivers", Q_NULLPTR));
        labelLinux->setText(QApplication::translate("MEConfig", "<html><head/><body><p>This tool makes it easier to set up the network driver for your Broadcom network card.</p></body></html>", Q_NULLPTR));
        driversGroupBox->setTitle(QApplication::translate("MEConfig", "Associated Linux drivers", Q_NULLPTR));
        linuxDrvLoad->setText(QApplication::translate("MEConfig", "Load Driver", Q_NULLPTR));
        linuxDrvUnload->setText(QApplication::translate("MEConfig", "Unload Driver", Q_NULLPTR));
        linuxDrvDiagnosePushButton->setText(QApplication::translate("MEConfig", "Re-list Linux Drivers", Q_NULLPTR));
        linuxDrvBlacklistPushButton->setText(QApplication::translate("MEConfig", "Blacklist Driver", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(linuxTab), QApplication::translate("MEConfig", "Linux drivers", Q_NULLPTR));
        groupBoxWindows->setTitle(QApplication::translate("MEConfig", "About NDISwrapper", Q_NULLPTR));
        installNdiswrapper->setText(QApplication::translate("MEConfig", "Install NDISwrapper", Q_NULLPTR));
        labelNdiswrapper->setText(QApplication::translate("MEConfig", "In order to use Windows drivers you need first to install NDISwrapper, please press the Install NDISwrapper button.", Q_NULLPTR));
        uninstallNdiswrapper->setText(QApplication::translate("MEConfig", "Uninstall NDISwrapper", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MEConfig", "Windows Drivers", Q_NULLPTR));
        windowsDrvRemovePushButton->setText(QApplication::translate("MEConfig", "Remove Driver", Q_NULLPTR));
        windowsDrvAddPushButton->setText(QApplication::translate("MEConfig", "Add Driver", Q_NULLPTR));
        windowsDrvDiagnosePushButton->setText(QApplication::translate("MEConfig", "List Windows drivers", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(windowsTab), QApplication::translate("MEConfig", "Windows drivers", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MEConfig", "IP address", Q_NULLPTR));
        labelIP->setText(QString());
        labelRouterIP->setText(QString());
        pingGroupBox->setTitle(QApplication::translate("MEConfig", "Ping", Q_NULLPTR));
        labelPingURL->setText(QApplication::translate("MEConfig", "Target URL:", Q_NULLPTR));
        labelPackets->setText(QApplication::translate("MEConfig", "Packets", Q_NULLPTR));
        pingButton->setText(QApplication::translate("MEConfig", "Start", Q_NULLPTR));
        clearPingOutput->setText(QApplication::translate("MEConfig", "Clear", Q_NULLPTR));
        cancelPing->setText(QApplication::translate("MEConfig", "Cancel", Q_NULLPTR));
        tracerouteGroupBox->setTitle(QApplication::translate("MEConfig", "Traceroute", Q_NULLPTR));
        labelURL->setText(QApplication::translate("MEConfig", "Target URL:", Q_NULLPTR));
        labelHops->setText(QApplication::translate("MEConfig", "Hops", Q_NULLPTR));
        tracerouteOutputEdit->setHtml(QApplication::translate("MEConfig", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"><br /></p></body></html>", Q_NULLPTR));
        tracerouteButton->setText(QApplication::translate("MEConfig", "Start", Q_NULLPTR));
        clearTraceOutput->setText(QApplication::translate("MEConfig", "Clear", Q_NULLPTR));
        cancelTrace->setText(QApplication::translate("MEConfig", "Cancel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(diagnosticsTab), QApplication::translate("MEConfig", "Net diagnostics", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MEConfig: public Ui_MEConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MECONFIG_H
