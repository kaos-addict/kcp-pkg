/********************************************************************************
** Form generated from reading UI file 'configure.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_H
#define UI_CONFIGURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Configure
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelIcon;
    QFrame *lineApiUrl;
    QFormLayout *formLayoutApiUrl;
    QLabel *labelApiUrl;
    QLineEdit *lineEditApiUrl;
    QFrame *lineTimer;
    QCheckBox *checkBoxTimer;
    QFormLayout *formLayoutTimer;
    QLabel *labelCheckChanges;
    QSpinBox *spinBoxTimer;
    QFrame *lineProxy;
    QCheckBox *checkBoxProxy;
    QFormLayout *formLayoutProxy;
    QLabel *labelProxyType;
    QComboBox *comboBoxProxyType;
    QLabel *labelProxyServer;
    QLineEdit *lineEditProxyServer;
    QLabel *labelProxyPort;
    QSpinBox *spinBoxProxyPort;
    QLabel *labelProxyUsername;
    QLineEdit *lineEditProxyUsername;
    QLabel *labelProxyPassword;
    QLineEdit *lineEditProxyPassword;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Configure)
    {
        if (Configure->objectName().isEmpty())
            Configure->setObjectName(QStringLiteral("Configure"));
        Configure->setWindowModality(Qt::ApplicationModal);
        Configure->resize(491, 414);
        verticalLayout = new QVBoxLayout(Configure);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelIcon = new QLabel(Configure);
        labelIcon->setObjectName(QStringLiteral("labelIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelIcon->sizePolicy().hasHeightForWidth());
        labelIcon->setSizePolicy(sizePolicy);
        labelIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/configure.png")));

        verticalLayout->addWidget(labelIcon);

        lineApiUrl = new QFrame(Configure);
        lineApiUrl->setObjectName(QStringLiteral("lineApiUrl"));
        lineApiUrl->setFrameShape(QFrame::HLine);
        lineApiUrl->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(lineApiUrl);

        formLayoutApiUrl = new QFormLayout();
        formLayoutApiUrl->setObjectName(QStringLiteral("formLayoutApiUrl"));
        labelApiUrl = new QLabel(Configure);
        labelApiUrl->setObjectName(QStringLiteral("labelApiUrl"));

        formLayoutApiUrl->setWidget(0, QFormLayout::LabelRole, labelApiUrl);

        lineEditApiUrl = new QLineEdit(Configure);
        lineEditApiUrl->setObjectName(QStringLiteral("lineEditApiUrl"));

        formLayoutApiUrl->setWidget(0, QFormLayout::FieldRole, lineEditApiUrl);


        verticalLayout->addLayout(formLayoutApiUrl);

        lineTimer = new QFrame(Configure);
        lineTimer->setObjectName(QStringLiteral("lineTimer"));
        lineTimer->setFrameShape(QFrame::HLine);
        lineTimer->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(lineTimer);

        checkBoxTimer = new QCheckBox(Configure);
        checkBoxTimer->setObjectName(QStringLiteral("checkBoxTimer"));

        verticalLayout->addWidget(checkBoxTimer);

        formLayoutTimer = new QFormLayout();
        formLayoutTimer->setObjectName(QStringLiteral("formLayoutTimer"));
        labelCheckChanges = new QLabel(Configure);
        labelCheckChanges->setObjectName(QStringLiteral("labelCheckChanges"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCheckChanges->sizePolicy().hasHeightForWidth());
        labelCheckChanges->setSizePolicy(sizePolicy1);

        formLayoutTimer->setWidget(0, QFormLayout::LabelRole, labelCheckChanges);

        spinBoxTimer = new QSpinBox(Configure);
        spinBoxTimer->setObjectName(QStringLiteral("spinBoxTimer"));
        sizePolicy.setHeightForWidth(spinBoxTimer->sizePolicy().hasHeightForWidth());
        spinBoxTimer->setSizePolicy(sizePolicy);

        formLayoutTimer->setWidget(0, QFormLayout::FieldRole, spinBoxTimer);


        verticalLayout->addLayout(formLayoutTimer);

        lineProxy = new QFrame(Configure);
        lineProxy->setObjectName(QStringLiteral("lineProxy"));
        lineProxy->setFrameShape(QFrame::HLine);
        lineProxy->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(lineProxy);

        checkBoxProxy = new QCheckBox(Configure);
        checkBoxProxy->setObjectName(QStringLiteral("checkBoxProxy"));

        verticalLayout->addWidget(checkBoxProxy);

        formLayoutProxy = new QFormLayout();
        formLayoutProxy->setObjectName(QStringLiteral("formLayoutProxy"));
        labelProxyType = new QLabel(Configure);
        labelProxyType->setObjectName(QStringLiteral("labelProxyType"));

        formLayoutProxy->setWidget(0, QFormLayout::LabelRole, labelProxyType);

        comboBoxProxyType = new QComboBox(Configure);
        comboBoxProxyType->setObjectName(QStringLiteral("comboBoxProxyType"));
        comboBoxProxyType->setEnabled(false);

        formLayoutProxy->setWidget(0, QFormLayout::FieldRole, comboBoxProxyType);

        labelProxyServer = new QLabel(Configure);
        labelProxyServer->setObjectName(QStringLiteral("labelProxyServer"));

        formLayoutProxy->setWidget(1, QFormLayout::LabelRole, labelProxyServer);

        lineEditProxyServer = new QLineEdit(Configure);
        lineEditProxyServer->setObjectName(QStringLiteral("lineEditProxyServer"));
        lineEditProxyServer->setEnabled(false);

        formLayoutProxy->setWidget(1, QFormLayout::FieldRole, lineEditProxyServer);

        labelProxyPort = new QLabel(Configure);
        labelProxyPort->setObjectName(QStringLiteral("labelProxyPort"));

        formLayoutProxy->setWidget(2, QFormLayout::LabelRole, labelProxyPort);

        spinBoxProxyPort = new QSpinBox(Configure);
        spinBoxProxyPort->setObjectName(QStringLiteral("spinBoxProxyPort"));
        spinBoxProxyPort->setEnabled(false);
        spinBoxProxyPort->setMaximum(9999);
        spinBoxProxyPort->setValue(8080);

        formLayoutProxy->setWidget(2, QFormLayout::FieldRole, spinBoxProxyPort);

        labelProxyUsername = new QLabel(Configure);
        labelProxyUsername->setObjectName(QStringLiteral("labelProxyUsername"));

        formLayoutProxy->setWidget(3, QFormLayout::LabelRole, labelProxyUsername);

        lineEditProxyUsername = new QLineEdit(Configure);
        lineEditProxyUsername->setObjectName(QStringLiteral("lineEditProxyUsername"));
        lineEditProxyUsername->setEnabled(false);

        formLayoutProxy->setWidget(3, QFormLayout::FieldRole, lineEditProxyUsername);

        labelProxyPassword = new QLabel(Configure);
        labelProxyPassword->setObjectName(QStringLiteral("labelProxyPassword"));

        formLayoutProxy->setWidget(4, QFormLayout::LabelRole, labelProxyPassword);

        lineEditProxyPassword = new QLineEdit(Configure);
        lineEditProxyPassword->setObjectName(QStringLiteral("lineEditProxyPassword"));
        lineEditProxyPassword->setEnabled(false);
        lineEditProxyPassword->setEchoMode(QLineEdit::Password);

        formLayoutProxy->setWidget(4, QFormLayout::FieldRole, lineEditProxyPassword);


        verticalLayout->addLayout(formLayoutProxy);

        buttonBox = new QDialogButtonBox(Configure);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Configure);
        QObject::connect(buttonBox, SIGNAL(accepted()), Configure, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Configure, SLOT(reject()));

        QMetaObject::connectSlotsByName(Configure);
    } // setupUi

    void retranslateUi(QDialog *Configure)
    {
        Configure->setWindowTitle(QApplication::translate("Configure", "Configure Qactus", 0));
        labelIcon->setText(QString());
        labelApiUrl->setText(QApplication::translate("Configure", "OBS API:", 0));
        checkBoxTimer->setText(QApplication::translate("Configure", "Enable timer", 0));
        labelCheckChanges->setText(QApplication::translate("Configure", "Check for changes every", 0));
        spinBoxTimer->setSuffix(QApplication::translate("Configure", " Min", 0));
        checkBoxProxy->setText(QApplication::translate("Configure", "Enable proxy", 0));
        labelProxyType->setText(QApplication::translate("Configure", "Type:", 0));
        labelProxyServer->setText(QApplication::translate("Configure", "Server:", 0));
        labelProxyPort->setText(QApplication::translate("Configure", "Port:", 0));
        labelProxyUsername->setText(QApplication::translate("Configure", "Username:", 0));
        labelProxyPassword->setText(QApplication::translate("Configure", "Password:", 0));
    } // retranslateUi

};

namespace Ui {
    class Configure: public Ui_Configure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_H
