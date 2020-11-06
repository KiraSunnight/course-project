#include "mydialog.h"
#include <QFile>
#include <QIODevice>
#include <QTextStream>

MyDialog::MyDialog::MyDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Анкета");
    this->cBox = new QComboBox;
    cBox->addItems({"Первый", "Второй", "Третий"});
    this->pButton = new QPushButton;
    pButton->setText("Сохранить");
    this->sBox = new QSpinBox;
    this->tEdit = new QTextEdit;
    QHBoxLayout *Hlay = new QHBoxLayout;
    Hlay->addWidget(pButton);
    Hlay->addWidget(cBox);
    Hlay->addWidget(sBox);
    Hlay->addWidget(tEdit);
    this->setLayout(Hlay);

    connect(pButton, SIGNAL(clicked()), this, SLOT(Wrf()));
}

MyDialog::~MyDialog()
{

}

void MyDialog::Wrf()
{
    QString file_path = "./output_data.txt";

        QFile file(file_path);
        file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text);

        QTextStream in(&file);
        in << "sBox: " << this->sBox->value() << Qt::endl;
        in << "tEdit: " << this->tEdit->toPlainText() << Qt::endl;
        in << "cBox: " << this->cBox->currentText() << Qt::endl;

        file.flush();
        file.close();
}
