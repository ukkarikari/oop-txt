#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Word.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_wordInput_returnPressed()
{

    QString inputText = ui->wordInput->text(); //stores text in box to inputText
    qDebug() << inputText;

    //new instance of word object
    Word *newWord = new Word(inputText);
    //graph->addItem(newWord); // this will add the object to the
                               // graph when we get that done

    ui->labelstatus->setText(inputText); //prints last word inputted






}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    EditWord *edit = new EditWord(this, ui->labelstatus);
    edit->show();

}

