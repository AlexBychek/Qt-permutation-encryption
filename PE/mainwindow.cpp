#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->source_text = ui->SourceText->toPlainText();
    this->key = ui->KeyLine->text();
    bool key_check;

    this->source_text = this->source_text.simplified();
    for(int i = 0; i < list.size(); i++)
    {
        this->source_text.replace( list[i], "");
    }


    int check = key.toInt(&key_check);

    if(key_check == false)
    {
        ui->Error_label->setText("Ключ не соответствует числовому значению!!!\nЗначение ключа слишком большое");
    }
    else if(key.size() > source_text.size() || key.size() == 0)
    {
        ui->Error_label->setText("Ключ больше исходного текста либо его нет");
    }
    else if(key.size() < 2)
    {
        ui->Error_label->setText("Длина ключа меньше нормы!");
    }
    else
    {

    ui->Error_label->setText("Сдесь отображаются возможные ошибки");

    ui->KeyLine->setText(" ");
    QString key_result;
    QList<int> key_chars;
    for(int i = 0; i < key.size();i++)
    {
        char buff = key.toStdString().c_str()[i];
        if(!key_chars.contains(buff - 48))
        {
            key_chars.append(buff - 48);
            key_result+=buff;
        }
    }

    int max = *std::max_element(key_chars.begin(), key_chars.end());

    ui->KeyLine->setText(key_result);

    QVector<QVector<QString>> ecrpt;
    ecrpt.resize(max+1);

    for(int i = 0; i < ecrpt.size(); i++)
        ecrpt[i].resize(1);

    int i = 0;
    int j = 0;

    while(i < source_text.size())
    {
        if(j == key_chars.size())
             j = 0;

    ecrpt[ key_chars[j]][0] += source_text[i];

        j++;
        i++;
    }

    int maxValue = 0;
    for(int i = 0; i < ecrpt.size(); i++){
        maxValue = qMax(maxValue, ecrpt[i][0].size());
    }

    for(int i = 0; i < ecrpt.size(); i++){
        if(ecrpt[i][0].size() != 0)
        {
            while(maxValue > ecrpt[i][0].size())
            {
                ecrpt[i][0] += "-";
            }

        }
    }


  QString result;
    for(int i = 0; i < ecrpt.size(); i++)
        result += ecrpt[i][0];

    ui->EncText->setText(result);
    }
}

void MainWindow::on_Dec_clicked()
{
    this->source_text = ui->SourceText->toPlainText();
    this->key = ui->KeyLine->text();
    bool key_check;

    this->source_text = this->source_text.simplified();
    for(int i = 0; i < list.size(); i++)
    {
        this->source_text.replace( list[i], "");
    }


    int check = key.toInt(&key_check);

    if(key_check == false)
    {
        ui->Error_label->setText("Ключ не соответствует числовому значению!!!\nЗначение ключа слишком большое");
    }
    else if(key.size() > source_text.size() || key.size() == 0)
    {
        ui->Error_label->setText("Ключ больше исходного текста либо его нет");
    }
    else if(key.size() < 2)
    {
        ui->Error_label->setText("Длина ключа меньше нормы!");
    }
    else
    {

    ui->Error_label->setText("Сдесь отображаются возможные ошибки");

    ui->KeyLine->setText(" ");
    QString key_result;
    QList<int> key_chars;
    for(int i = 0; i < key.size();i++)
    {
        char buff = key.toStdString().c_str()[i];
        if(!key_chars.contains(buff - 48))
        {
            key_chars.append(buff - 48);
            key_result+=buff;
        }
    }

    int max = *std::max_element(key_chars.begin(), key_chars.end());

    ui->KeyLine->setText(key_result);

    QVector<QVector<QString>> ecrpt;
    ecrpt.resize(max+1);

    for(int i = 0; i < ecrpt.size(); i++)
        ecrpt[i].resize(1);

    int div = source_text.size() / key_chars.size();
    int step = 0;

    for(int i = 0; i < key_chars.size(); i++)
    {
         step = (key_chars[i] * div) - div;

            for(int j = step; j < step+div; j++ )
            {
              ecrpt[i][0] += source_text[j];
            }

    }


  QString result;
    for(int i = 0; i < div; i++)
    {
        for(int j = 0; j < ecrpt.size();j++)
            if(ecrpt[j][0][i] != '-')
            result += ecrpt[j][0][i];
    }



    ui->EncText->setText(result);
    }
}
