#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCharFormat>
#include "auth.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action,SIGNAL(triggered()),this,SLOT(About_Lab1()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void  MainWindow::About_Lab1()
{
    auth *dg = new auth();
        dg->show();
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->calendarWidget->setFirstDayOfWeek(Qt::DayOfWeek(index+1));
    for (int i = 1; i < 8; i++)
    {
        if (i == index + 1) {
            QTextCharFormat format;
            format.setForeground(qvariant_cast<QColor>("green"));
            ui->calendarWidget->setWeekdayTextFormat(Qt::DayOfWeek(i), format);
        } else if (i > 0 && i < 6) {
            QTextCharFormat format;
            format.setForeground(qvariant_cast<QColor>("black"));
            ui->calendarWidget->setWeekdayTextFormat(Qt::DayOfWeek(i), format);
        } else if (i > 5) {
            QTextCharFormat format;
            format.setForeground(qvariant_cast<QColor>("red"));
            ui->calendarWidget->setWeekdayTextFormat(Qt::DayOfWeek(i), format);
        }
    }
}
