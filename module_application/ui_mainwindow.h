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
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *host_name_label;
    QLabel *user_name_label;
    QLabel *uptime_label;
    QLabel *cpu_model_label;
    QLabel *cpu_frequency_label;
    QHBoxLayout *horizontalLayout;
    QLabel *cpu_load_label;
    QProgressBar *cpu_load_progressbar;
    QLabel *total_memory_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *busy_memory_lable;
    QProgressBar *busy_memory_progressbar;
    QWidget *tab;
    QTextBrowser *tb_tree;
    QPushButton *btn_tree;
    QWidget *tab_3;
    QTextBrowser *tb_files;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *btn_files;
    QLabel *label;
    QSpinBox *spb_files;
    QWidget *tab_2;
    QTextBrowser *tb_mem;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout1;
    QPushButton *btn_mem;
    QLabel *label_2;
    QSpinBox *spb_mem;

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
        tabWidget->setGeometry(QRect(6, 10, 1191, 650));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        info_tab = new QWidget();
        info_tab->setObjectName(QString::fromUtf8("info_tab"));
        sizePolicy.setHeightForWidth(info_tab->sizePolicy().hasHeightForWidth());
        info_tab->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(info_tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        host_name_label = new QLabel(info_tab);
        host_name_label->setObjectName(QString::fromUtf8("host_name_label"));
        host_name_label->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(host_name_label, 0, Qt::AlignTop);

        user_name_label = new QLabel(info_tab);
        user_name_label->setObjectName(QString::fromUtf8("user_name_label"));
        user_name_label->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(user_name_label, 0, Qt::AlignTop);

        uptime_label = new QLabel(info_tab);
        uptime_label->setObjectName(QString::fromUtf8("uptime_label"));
        uptime_label->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(uptime_label, 0, Qt::AlignTop);

        cpu_model_label = new QLabel(info_tab);
        cpu_model_label->setObjectName(QString::fromUtf8("cpu_model_label"));
        cpu_model_label->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(cpu_model_label, 0, Qt::AlignTop);

        cpu_frequency_label = new QLabel(info_tab);
        cpu_frequency_label->setObjectName(QString::fromUtf8("cpu_frequency_label"));
        cpu_frequency_label->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(cpu_frequency_label, 0, Qt::AlignTop);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        cpu_load_label = new QLabel(info_tab);
        cpu_load_label->setObjectName(QString::fromUtf8("cpu_load_label"));
        cpu_load_label->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(cpu_load_label, 0, Qt::AlignTop);

        cpu_load_progressbar = new QProgressBar(info_tab);
        cpu_load_progressbar->setObjectName(QString::fromUtf8("cpu_load_progressbar"));
        cpu_load_progressbar->setValue(0);

        horizontalLayout->addWidget(cpu_load_progressbar, 0, Qt::AlignTop);


        verticalLayout->addLayout(horizontalLayout);

        total_memory_label = new QLabel(info_tab);
        total_memory_label->setObjectName(QString::fromUtf8("total_memory_label"));
        total_memory_label->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(total_memory_label, 0, Qt::AlignTop);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        busy_memory_lable = new QLabel(info_tab);
        busy_memory_lable->setObjectName(QString::fromUtf8("busy_memory_lable"));
        busy_memory_lable->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_2->addWidget(busy_memory_lable, 0, Qt::AlignTop);

        busy_memory_progressbar = new QProgressBar(info_tab);
        busy_memory_progressbar->setObjectName(QString::fromUtf8("busy_memory_progressbar"));
        busy_memory_progressbar->setMaximumSize(QSize(16777215, 16777215));
        busy_memory_progressbar->setValue(0);

        horizontalLayout_2->addWidget(busy_memory_progressbar, 0, Qt::AlignTop);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(info_tab, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tb_tree = new QTextBrowser(tab);
        tb_tree->setObjectName(QString::fromUtf8("tb_tree"));
        tb_tree->setGeometry(QRect(10, 40, 1170, 570));
        tb_tree->setFrameShadow(QFrame::Sunken);
        tb_tree->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_tree->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_tree->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        btn_tree = new QPushButton(tab);
        btn_tree->setObjectName(QString::fromUtf8("btn_tree"));
        btn_tree->setGeometry(QRect(10, 10, 221, 23));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tb_files = new QTextBrowser(tab_3);
        tb_files->setObjectName(QString::fromUtf8("tb_files"));
        tb_files->setGeometry(QRect(10, 40, 1170, 570));
        tb_files->setFrameShadow(QFrame::Sunken);
        tb_files->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_files->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_files->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 438, 29));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        btn_files = new QPushButton(layoutWidget);
        btn_files->setObjectName(QString::fromUtf8("btn_files"));

        horizontalLayout_21->addWidget(btn_files);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_21->addWidget(label);

        spb_files = new QSpinBox(layoutWidget);
        spb_files->setObjectName(QString::fromUtf8("spb_files"));
        spb_files->setMaximum(100000);
        spb_files->setValue(1);

        horizontalLayout_21->addWidget(spb_files);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tb_mem = new QTextBrowser(tab_2);
        tb_mem->setObjectName(QString::fromUtf8("tb_mem"));
        tb_mem->setGeometry(QRect(10, 40, 1170, 570));
        tb_mem->setFrameShadow(QFrame::Sunken);
        tb_mem->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_mem->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tb_mem->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 436, 29));
        horizontalLayout1 = new QHBoxLayout(layoutWidget1);
        horizontalLayout1->setSpacing(6);
        horizontalLayout1->setContentsMargins(11, 11, 11, 11);
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        horizontalLayout1->setContentsMargins(0, 0, 0, 0);
        btn_mem = new QPushButton(layoutWidget1);
        btn_mem->setObjectName(QString::fromUtf8("btn_mem"));

        horizontalLayout1->addWidget(btn_mem);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout1->addWidget(label_2);

        spb_mem = new QSpinBox(layoutWidget1);
        spb_mem->setObjectName(QString::fromUtf8("spb_mem"));
        spb_mem->setMaximum(100000);
        spb_mem->setValue(1);

        horizontalLayout1->addWidget(spb_mem);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Module Application", nullptr));
        host_name_label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260:", nullptr));
        user_name_label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", nullptr));
        uptime_label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\275\320\265\320\277\321\200\320\265\321\200\321\213\320\262\320\275\320\276\320\271 \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        cpu_model_label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260:", nullptr));
        cpu_frequency_label->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260:", nullptr));
        cpu_load_label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260:", nullptr));
        total_memory_label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\260\321\217 \320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214:", nullptr));
        busy_memory_lable->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\320\274\320\260\321\217 \320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(info_tab), QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\201\320\270\321\201\321\202\320\265\320\274\320\265", nullptr));
        btn_tree->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\264\320\265\321\200\320\265\320\262\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\224\320\265\321\200\320\265\320\262\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\262", nullptr));
        btn_files->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \321\204\320\260\320\271\320\273\320\260\321\205", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\213\320\265 \321\204\320\260\320\271\320\273\321\213", nullptr));
        btn_mem->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\277\320\260\320\274\321\217\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\222\320\270\321\200\321\202\321\203\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
