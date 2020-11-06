#include <QDialog>
#include <QSpinBox>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QComboBox>
#include <QPushButton>

#ifndef MYDIALOG_H
#define MYDIALOG_H


class MyDialog : public QDialog
{

    Q_OBJECT

private:
    QSpinBox *sBox;
    QTextEdit *tEdit;
    QComboBox *cBox;
    QPushButton *pButton;

public:
    explicit MyDialog(QWidget *parent = 0);
    ~MyDialog();

private slots:
    void Wrf();
};

#endif // MYDIALOG_H
