/********************************************************************************
** Form generated from reading UI file 'auth.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_H
#define UI_AUTH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_auth
{
public:
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QWidget *auth)
    {
        if (auth->objectName().isEmpty())
            auth->setObjectName(QString::fromUtf8("auth"));
        auth->resize(417, 313);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/logo"), QSize(), QIcon::Normal, QIcon::Off);
        auth->setWindowIcon(icon);
        label = new QLabel(auth);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 192, 239));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo")));
        label->setScaledContents(true);
        textEdit = new QTextEdit(auth);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(218, 20, 121, 239));

        retranslateUi(auth);

        QMetaObject::connectSlotsByName(auth);
    } // setupUi

    void retranslateUi(QWidget *auth)
    {
        auth->setWindowTitle(QCoreApplication::translate("auth", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\260\320\262\321\202\320\276\321\200\320\260\321\205", nullptr));
        label->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("auth", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\220\320\262\321\202\320\276\321\200: \320\237\320\270\321\200\320\276\320\266\320\272\320\276\320\262 \320\232\320\270\321\200\320\270\320\273\320\273 \320\242\320\270\320\274\320\276\321\204\320\265\320\265\320\262\320\270\321\207</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\223\321\200\321\203\320\277\320\277\320\260: \320\232\320\23019-07\320\221</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class auth: public Ui_auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_H