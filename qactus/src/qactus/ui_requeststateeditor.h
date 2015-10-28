/********************************************************************************
** Form generated from reading UI file 'requeststateeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTSTATEEDITOR_H
#define UI_REQUESTSTATEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RequestStateEditor
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *requestIdLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *requestIdLabelText;
    QLabel *requesterLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *sourceLabel;
    QLabel *sourceLabelText;
    QLabel *targetLabel;
    QLabel *targetLabelText;
    QLabel *dateLabel;
    QLabel *dateLabelText;
    QFrame *line;
    QLabel *diffLabel;
    QTextBrowser *diffTextBrowser;
    QLabel *commentsLabel;
    QTextBrowser *commentsTextBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *acceptPushButton;
    QPushButton *declinePushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *RequestStateEditor)
    {
        if (RequestStateEditor->objectName().isEmpty())
            RequestStateEditor->setObjectName(QStringLiteral("RequestStateEditor"));
        RequestStateEditor->resize(523, 495);
        verticalLayout = new QVBoxLayout(RequestStateEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        requestIdLabel = new QLabel(RequestStateEditor);
        requestIdLabel->setObjectName(QStringLiteral("requestIdLabel"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        requestIdLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, requestIdLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        requestIdLabelText = new QLabel(RequestStateEditor);
        requestIdLabelText->setObjectName(QStringLiteral("requestIdLabelText"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        requestIdLabelText->setFont(font1);

        horizontalLayout_2->addWidget(requestIdLabelText);

        requesterLabel = new QLabel(RequestStateEditor);
        requesterLabel->setObjectName(QStringLiteral("requesterLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(requesterLabel->sizePolicy().hasHeightForWidth());
        requesterLabel->setSizePolicy(sizePolicy);
        requesterLabel->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout_2->addWidget(requesterLabel);

        horizontalSpacer_2 = new QSpacerItem(7, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        sourceLabel = new QLabel(RequestStateEditor);
        sourceLabel->setObjectName(QStringLiteral("sourceLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, sourceLabel);

        sourceLabelText = new QLabel(RequestStateEditor);
        sourceLabelText->setObjectName(QStringLiteral("sourceLabelText"));

        formLayout->setWidget(2, QFormLayout::FieldRole, sourceLabelText);

        targetLabel = new QLabel(RequestStateEditor);
        targetLabel->setObjectName(QStringLiteral("targetLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, targetLabel);

        targetLabelText = new QLabel(RequestStateEditor);
        targetLabelText->setObjectName(QStringLiteral("targetLabelText"));

        formLayout->setWidget(3, QFormLayout::FieldRole, targetLabelText);

        dateLabel = new QLabel(RequestStateEditor);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, dateLabel);

        dateLabelText = new QLabel(RequestStateEditor);
        dateLabelText->setObjectName(QStringLiteral("dateLabelText"));

        formLayout->setWidget(4, QFormLayout::FieldRole, dateLabelText);


        verticalLayout->addLayout(formLayout);

        line = new QFrame(RequestStateEditor);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        diffLabel = new QLabel(RequestStateEditor);
        diffLabel->setObjectName(QStringLiteral("diffLabel"));

        verticalLayout->addWidget(diffLabel);

        diffTextBrowser = new QTextBrowser(RequestStateEditor);
        diffTextBrowser->setObjectName(QStringLiteral("diffTextBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(diffTextBrowser->sizePolicy().hasHeightForWidth());
        diffTextBrowser->setSizePolicy(sizePolicy1);
        diffTextBrowser->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(diffTextBrowser);

        commentsLabel = new QLabel(RequestStateEditor);
        commentsLabel->setObjectName(QStringLiteral("commentsLabel"));

        verticalLayout->addWidget(commentsLabel);

        commentsTextBrowser = new QTextBrowser(RequestStateEditor);
        commentsTextBrowser->setObjectName(QStringLiteral("commentsTextBrowser"));
        sizePolicy1.setHeightForWidth(commentsTextBrowser->sizePolicy().hasHeightForWidth());
        commentsTextBrowser->setSizePolicy(sizePolicy1);
        commentsTextBrowser->setMinimumSize(QSize(0, 0));
        commentsTextBrowser->setMaximumSize(QSize(16777215, 70));
        commentsTextBrowser->setInputMethodHints(Qt::ImhNone);
        commentsTextBrowser->setUndoRedoEnabled(true);
        commentsTextBrowser->setReadOnly(false);

        verticalLayout->addWidget(commentsTextBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        acceptPushButton = new QPushButton(RequestStateEditor);
        acceptPushButton->setObjectName(QStringLiteral("acceptPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(acceptPushButton->sizePolicy().hasHeightForWidth());
        acceptPushButton->setSizePolicy(sizePolicy2);
        acceptPushButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/dialog-ok-apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        acceptPushButton->setIcon(icon);

        horizontalLayout->addWidget(acceptPushButton);

        declinePushButton = new QPushButton(RequestStateEditor);
        declinePushButton->setObjectName(QStringLiteral("declinePushButton"));
        sizePolicy2.setHeightForWidth(declinePushButton->sizePolicy().hasHeightForWidth());
        declinePushButton->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/dialog-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        declinePushButton->setIcon(icon1);

        horizontalLayout->addWidget(declinePushButton);

        closePushButton = new QPushButton(RequestStateEditor);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        closePushButton->setIcon(icon2);

        horizontalLayout->addWidget(closePushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RequestStateEditor);
        QObject::connect(closePushButton, SIGNAL(clicked()), RequestStateEditor, SLOT(close()));

        QMetaObject::connectSlotsByName(RequestStateEditor);
    } // setupUi

    void retranslateUi(QDialog *RequestStateEditor)
    {
        RequestStateEditor->setWindowTitle(QApplication::translate("RequestStateEditor", "Request State Change", 0));
        requestIdLabel->setText(QApplication::translate("RequestStateEditor", "Request ID:", 0));
        requestIdLabelText->setText(QApplication::translate("RequestStateEditor", "TextLabel", 0));
        requesterLabel->setText(QApplication::translate("RequestStateEditor", "TextLabel", 0));
        sourceLabel->setText(QApplication::translate("RequestStateEditor", "Source:", 0));
        sourceLabelText->setText(QApplication::translate("RequestStateEditor", "TextLabel", 0));
        targetLabel->setText(QApplication::translate("RequestStateEditor", "Target:", 0));
        targetLabelText->setText(QApplication::translate("RequestStateEditor", "TextLabel", 0));
        dateLabel->setText(QApplication::translate("RequestStateEditor", "Date:", 0));
        dateLabelText->setText(QApplication::translate("RequestStateEditor", "TextLabel", 0));
        diffLabel->setText(QApplication::translate("RequestStateEditor", "Changes:", 0));
        commentsLabel->setText(QApplication::translate("RequestStateEditor", "Comments:", 0));
        acceptPushButton->setText(QApplication::translate("RequestStateEditor", "Accept", 0));
        declinePushButton->setText(QApplication::translate("RequestStateEditor", "Decline", 0));
        closePushButton->setText(QApplication::translate("RequestStateEditor", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class RequestStateEditor: public Ui_RequestStateEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTSTATEEDITOR_H
