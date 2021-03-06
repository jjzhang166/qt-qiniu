#ifndef QNSIMPLEUPLOADDATAWIDGET_H
#define QNSIMPLEUPLOADDATAWIDGET_H

#include <QWidget>
#include <QNetworkReply>

class QTextEdit;
class QPushButton;
class QLineEdit;
class QSettings;
class QNetworkAccessManager;

class QNSimpleUploadDataWidget : public QWidget
{
    Q_OBJECT

private:
    QNetworkAccessManager *networkManager;
    QTextEdit *putDataTextEdit;
    QLineEdit *accessKeyLineEdit;
    QLineEdit *secretKeyLineEdit;
    QLineEdit *bucketLineEdit;
    QLineEdit *keyLineEdit;
    QLineEdit *fileNameLineEdit;
    QPushButton *uploadButton;
    QSettings *globalSettings;
    void createLayout();
public:
    explicit QNSimpleUploadDataWidget(QNetworkAccessManager *networkManager,
                                      QWidget *parent = 0);

signals:

public slots:
    void uploadData();
    void recvData();
    void handleError(QNetworkReply::NetworkError);
};

#endif // QNSIMPLEUPLOADDATAWIDGET_H
