/********************************************************************************
** Form generated from reading UI file 'roweditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROWEDITOR_H
#define UI_ROWEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_RowEditor
{
public:
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayoutProject;
    QLabel *labelProject;
    QLineEdit *lineEditProject;
    QSpacerItem *verticalSpacerProject;
    QHBoxLayout *horizontalLayoutPackage;
    QLabel *labelPackage;
    QLineEdit *lineEditPackage;
    QSpacerItem *verticalSpacerPackage;
    QHBoxLayout *otherHorizontalLayout;
    QLabel *labelRepository;
    QLineEdit *lineEditRepository;
    QSpacerItem *horizontalSpacerArch;
    QLabel *labelArch;
    QLineEdit *lineEditArch;
    QSpacerItem *verticalSpacerOther;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RowEditor)
    {
        if (RowEditor->objectName().isEmpty())
            RowEditor->setObjectName(QStringLiteral("RowEditor"));
        RowEditor->resize(384, 169);
        formLayout = new QFormLayout(RowEditor);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        horizontalLayoutProject = new QHBoxLayout();
        horizontalLayoutProject->setObjectName(QStringLiteral("horizontalLayoutProject"));
        labelProject = new QLabel(RowEditor);
        labelProject->setObjectName(QStringLiteral("labelProject"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelProject->sizePolicy().hasHeightForWidth());
        labelProject->setSizePolicy(sizePolicy);
        labelProject->setMaximumSize(QSize(62, 16777215));

        horizontalLayoutProject->addWidget(labelProject);

        lineEditProject = new QLineEdit(RowEditor);
        lineEditProject->setObjectName(QStringLiteral("lineEditProject"));

        horizontalLayoutProject->addWidget(lineEditProject);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayoutProject);

        verticalSpacerProject = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacerProject);

        horizontalLayoutPackage = new QHBoxLayout();
        horizontalLayoutPackage->setObjectName(QStringLiteral("horizontalLayoutPackage"));
        labelPackage = new QLabel(RowEditor);
        labelPackage->setObjectName(QStringLiteral("labelPackage"));
        sizePolicy.setHeightForWidth(labelPackage->sizePolicy().hasHeightForWidth());
        labelPackage->setSizePolicy(sizePolicy);
        labelPackage->setMaximumSize(QSize(62, 16777215));

        horizontalLayoutPackage->addWidget(labelPackage);

        lineEditPackage = new QLineEdit(RowEditor);
        lineEditPackage->setObjectName(QStringLiteral("lineEditPackage"));

        horizontalLayoutPackage->addWidget(lineEditPackage);


        formLayout->setLayout(2, QFormLayout::SpanningRole, horizontalLayoutPackage);

        verticalSpacerPackage = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::LabelRole, verticalSpacerPackage);

        otherHorizontalLayout = new QHBoxLayout();
        otherHorizontalLayout->setObjectName(QStringLiteral("otherHorizontalLayout"));
        labelRepository = new QLabel(RowEditor);
        labelRepository->setObjectName(QStringLiteral("labelRepository"));
        sizePolicy.setHeightForWidth(labelRepository->sizePolicy().hasHeightForWidth());
        labelRepository->setSizePolicy(sizePolicy);
        labelRepository->setMaximumSize(QSize(62, 16777215));

        otherHorizontalLayout->addWidget(labelRepository);

        lineEditRepository = new QLineEdit(RowEditor);
        lineEditRepository->setObjectName(QStringLiteral("lineEditRepository"));

        otherHorizontalLayout->addWidget(lineEditRepository);

        horizontalSpacerArch = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        otherHorizontalLayout->addItem(horizontalSpacerArch);

        labelArch = new QLabel(RowEditor);
        labelArch->setObjectName(QStringLiteral("labelArch"));

        otherHorizontalLayout->addWidget(labelArch);

        lineEditArch = new QLineEdit(RowEditor);
        lineEditArch->setObjectName(QStringLiteral("lineEditArch"));
        lineEditArch->setMaximumSize(QSize(75, 16777215));

        otherHorizontalLayout->addWidget(lineEditArch);


        formLayout->setLayout(4, QFormLayout::SpanningRole, otherHorizontalLayout);

        verticalSpacerOther = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::LabelRole, verticalSpacerOther);

        buttonBox = new QDialogButtonBox(RowEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(6, QFormLayout::FieldRole, buttonBox);


        retranslateUi(RowEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), RowEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RowEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(RowEditor);
    } // setupUi

    void retranslateUi(QDialog *RowEditor)
    {
        RowEditor->setWindowTitle(QApplication::translate("RowEditor", "Row Editor", 0));
        labelProject->setText(QApplication::translate("RowEditor", "Project:", 0));
        labelPackage->setText(QApplication::translate("RowEditor", "Package:", 0));
        labelRepository->setText(QApplication::translate("RowEditor", "Repository:", 0));
        labelArch->setText(QApplication::translate("RowEditor", "Arch:", 0));
    } // retranslateUi

};

namespace Ui {
    class RowEditor: public Ui_RowEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROWEDITOR_H
