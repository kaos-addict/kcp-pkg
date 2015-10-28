/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout_Dialog;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_AutoLogin;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QLabel *label_Username;
    QLineEdit *lineEdit_Username;
    QLabel *label_AutoLogin;
    QPushButton *pushButton_Login;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *line;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->setWindowModality(Qt::ApplicationModal);
        Login->resize(270, 147);
        gridLayout_Dialog = new QGridLayout(Login);
        gridLayout_Dialog->setObjectName(QStringLiteral("gridLayout_Dialog"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBox_AutoLogin = new QCheckBox(Login);
        checkBox_AutoLogin->setObjectName(QStringLiteral("checkBox_AutoLogin"));

        gridLayout->addWidget(checkBox_AutoLogin, 2, 1, 1, 1);

        label_Password = new QLabel(Login);
        label_Password->setObjectName(QStringLiteral("label_Password"));

        gridLayout->addWidget(label_Password, 1, 0, 1, 1);

        lineEdit_Password = new QLineEdit(Login);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_Password, 1, 1, 1, 1);

        label_Username = new QLabel(Login);
        label_Username->setObjectName(QStringLiteral("label_Username"));

        gridLayout->addWidget(label_Username, 0, 0, 1, 1);

        lineEdit_Username = new QLineEdit(Login);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));

        gridLayout->addWidget(lineEdit_Username, 0, 1, 1, 1);

        label_AutoLogin = new QLabel(Login);
        label_AutoLogin->setObjectName(QStringLiteral("label_AutoLogin"));

        gridLayout->addWidget(label_AutoLogin, 2, 0, 1, 1);


        gridLayout_Dialog->addLayout(gridLayout, 0, 2, 1, 1);

        pushButton_Login = new QPushButton(Login);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));

        gridLayout_Dialog->addWidget(pushButton_Login, 2, 2, 1, 1, Qt::AlignRight);

        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/dialog-password.png")));

        gridLayout_Dialog->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_Dialog->addItem(horizontalSpacer, 0, 1, 1, 1);

        line = new QFrame(Login);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_Dialog->addWidget(line, 1, 0, 1, 3);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0));
        checkBox_AutoLogin->setText(QString());
        label_Password->setText(QApplication::translate("Login", "Password:", 0));
        label_Username->setText(QApplication::translate("Login", "Username:", 0));
        label_AutoLogin->setText(QApplication::translate("Login", "Auto Login", 0));
        pushButton_Login->setText(QApplication::translate("Login", "Login", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
