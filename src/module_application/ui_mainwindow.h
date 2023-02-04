/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *info_tab;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *host_name_label;
    QLabel *user_name_label;
    QLabel *linux_version_label;
    QLabel *uptime_label;
    QLabel *cpu_model_label;
    QLabel *cpu_frequency_label;
    QLabel *gpu_model_label;
    QLabel *total_memory_label;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *busy_memory_lable;
    QProgressBar *busy_memory_progressbar;
    QVBoxLayout *verticalLayout_4;
    QLabel *cpu_load_label;
    QProgressBar *cpu_load_progressbar;
    QVBoxLayout *verticalLayout_5;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spb_files;
    QPushButton *btn_files;
    QTextBrowser *tb_files;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spb_mem;
    QPushButton *btn_mem;
    QTextBrowser *tb_mem;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *btn_tree;
    QTextBrowser *tb_tree;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 660);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(6, 10, 1191, 651));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        info_tab = new QWidget();
        info_tab->setObjectName(QString::fromUtf8("info_tab"));
        horizontalLayout_3 = new QHBoxLayout(info_tab);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(info_tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 9, -1, -1);
        host_name_label = new QLabel(groupBox);
        host_name_label->setObjectName(QString::fromUtf8("host_name_label"));
        host_name_label->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        host_name_label->setFont(font1);

        verticalLayout_2->addWidget(host_name_label);

        user_name_label = new QLabel(groupBox);
        user_name_label->setObjectName(QString::fromUtf8("user_name_label"));
        user_name_label->setMaximumSize(QSize(16777215, 50));
        user_name_label->setFont(font1);

        verticalLayout_2->addWidget(user_name_label);

        linux_version_label = new QLabel(groupBox);
        linux_version_label->setObjectName(QString::fromUtf8("linux_version_label"));
        linux_version_label->setMaximumSize(QSize(16777215, 50));
        linux_version_label->setFont(font1);

        verticalLayout_2->addWidget(linux_version_label);

        uptime_label = new QLabel(groupBox);
        uptime_label->setObjectName(QString::fromUtf8("uptime_label"));
        uptime_label->setMaximumSize(QSize(16777215, 50));
        uptime_label->setFont(font1);

        verticalLayout_2->addWidget(uptime_label);

        cpu_model_label = new QLabel(groupBox);
        cpu_model_label->setObjectName(QString::fromUtf8("cpu_model_label"));
        cpu_model_label->setMaximumSize(QSize(16777215, 50));
        cpu_model_label->setFont(font1);

        verticalLayout_2->addWidget(cpu_model_label);

        cpu_frequency_label = new QLabel(groupBox);
        cpu_frequency_label->setObjectName(QString::fromUtf8("cpu_frequency_label"));
        cpu_frequency_label->setMaximumSize(QSize(16777215, 50));
        cpu_frequency_label->setFont(font1);

        verticalLayout_2->addWidget(cpu_frequency_label);

        gpu_model_label = new QLabel(groupBox);
        gpu_model_label->setObjectName(QString::fromUtf8("gpu_model_label"));
        gpu_model_label->setMaximumSize(QSize(16777215, 50));
        gpu_model_label->setFont(font1);

        verticalLayout_2->addWidget(gpu_model_label);

        total_memory_label = new QLabel(groupBox);
        total_memory_label->setObjectName(QString::fromUtf8("total_memory_label"));
        total_memory_label->setMaximumSize(QSize(16777215, 50));
        total_memory_label->setFont(font1);

        verticalLayout_2->addWidget(total_memory_label);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(info_tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        busy_memory_lable = new QLabel(groupBox_2);
        busy_memory_lable->setObjectName(QString::fromUtf8("busy_memory_lable"));
        busy_memory_lable->setMaximumSize(QSize(16777215, 50));
        busy_memory_lable->setFont(font1);

        verticalLayout->addWidget(busy_memory_lable);

        busy_memory_progressbar = new QProgressBar(groupBox_2);
        busy_memory_progressbar->setObjectName(QString::fromUtf8("busy_memory_progressbar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(busy_memory_progressbar->sizePolicy().hasHeightForWidth());
        busy_memory_progressbar->setSizePolicy(sizePolicy1);
        busy_memory_progressbar->setMaximumSize(QSize(16777215, 16777215));
        busy_memory_progressbar->setFont(font1);
        busy_memory_progressbar->setValue(0);

        verticalLayout->addWidget(busy_memory_progressbar);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cpu_load_label = new QLabel(groupBox_2);
        cpu_load_label->setObjectName(QString::fromUtf8("cpu_load_label"));
        cpu_load_label->setMaximumSize(QSize(16777215, 50));
        cpu_load_label->setFont(font1);

        verticalLayout_4->addWidget(cpu_load_label);

        cpu_load_progressbar = new QProgressBar(groupBox_2);
        cpu_load_progressbar->setObjectName(QString::fromUtf8("cpu_load_progressbar"));
        cpu_load_progressbar->setFont(font1);
        cpu_load_progressbar->setValue(0);

        verticalLayout_4->addWidget(cpu_load_progressbar);


        verticalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));

        verticalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 4);

        horizontalLayout_3->addWidget(groupBox_2);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 5);
        tabWidget->addTab(info_tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        spb_files = new QSpinBox(groupBox_3);
        spb_files->setObjectName(QString::fromUtf8("spb_files"));
        spb_files->setFont(font1);
        spb_files->setMaximum(100000);
        spb_files->setValue(1);

        horizontalLayout_2->addWidget(spb_files);

        btn_files = new QPushButton(groupBox_3);
        btn_files->setObjectName(QString::fromUtf8("btn_files"));
        btn_files->setFont(font1);

        horizontalLayout_2->addWidget(btn_files);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_7->addLayout(horizontalLayout_2);

        tb_files = new QTextBrowser(groupBox_3);
        tb_files->setObjectName(QString::fromUtf8("tb_files"));
        tb_files->setFont(font1);
        tb_files->setFrameShadow(QFrame::Sunken);
        tb_files->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_files->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_files->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        verticalLayout_7->addWidget(tb_files);


        verticalLayout_6->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        spb_mem = new QSpinBox(groupBox_4);
        spb_mem->setObjectName(QString::fromUtf8("spb_mem"));
        spb_mem->setFont(font1);
        spb_mem->setMaximum(100000);
        spb_mem->setValue(1);

        horizontalLayout->addWidget(spb_mem);

        btn_mem = new QPushButton(groupBox_4);
        btn_mem->setObjectName(QString::fromUtf8("btn_mem"));
        btn_mem->setFont(font1);

        horizontalLayout->addWidget(btn_mem);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_8->addLayout(horizontalLayout);

        tb_mem = new QTextBrowser(groupBox_4);
        tb_mem->setObjectName(QString::fromUtf8("tb_mem"));
        tb_mem->setFont(font1);
        tb_mem->setFrameShadow(QFrame::Sunken);
        tb_mem->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_mem->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_mem->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        verticalLayout_8->addWidget(tb_mem);


        verticalLayout_6->addWidget(groupBox_4);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_tree = new QPushButton(tab);
        btn_tree->setObjectName(QString::fromUtf8("btn_tree"));

        gridLayout->addWidget(btn_tree, 0, 0, 1, 1);

        tb_tree = new QTextBrowser(tab);
        tb_tree->setObjectName(QString::fromUtf8("tb_tree"));
        tb_tree->setFrameShadow(QFrame::Sunken);
        tb_tree->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_tree->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_tree->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        gridLayout->addWidget(tb_tree, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Module Application", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        host_name_label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260:", nullptr));
        user_name_label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", nullptr));
        linux_version_label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\201\320\270\321\217 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \321\201\320\270\321\201\321\202\320\265\320\274\321\213:", nullptr));
        uptime_label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\275\320\265\320\277\321\200\320\265\321\200\321\213\320\262\320\275\320\276\320\271 \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        cpu_model_label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260:", nullptr));
        cpu_frequency_label->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260:", nullptr));
        gpu_model_label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\262\320\270\320\264\320\265\320\276\320\272\320\260\321\200\321\202\321\213:", nullptr));
        total_memory_label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\260\321\217 \320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        busy_memory_lable->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\320\274\320\260\321\217 \320\236\320\227\320\243:", nullptr));
        cpu_load_label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(info_tab), QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\276\321\202\320\272\321\200\321\213\321\202\321\213\321\205 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\274 \321\204\320\260\320\271\320\273\320\260\321\205", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260:", nullptr));
        btn_files->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \321\204\320\260\320\271\320\273\320\260\321\205", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\320\260\320\274\321\217\321\202\320\270 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260:", nullptr));
        btn_mem->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\277\320\260\320\274\321\217\321\202\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\265", nullptr));
        btn_tree->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\264\320\265\321\200\320\265\320\262\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\224\320\265\321\200\320\265\320\262\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
