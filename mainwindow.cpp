#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Word.h"
#include <iostream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    first_word = nullptr;
}

void MainWindow::on_wordInput_returnPressed()
{

    QString inputText = ui->wordInput->text(); //stores text in box to inputText
    qDebug() << inputText;


    //new instance of word object
    Word *newWord = new Word(inputText);
    //graph->addItem(newWord); // this will add the object to the
                               // graph when we get that done
    if (first_word == nullptr)
    {
        first_word = newWord;
        first_word->next = nullptr;
    }
    else
    {
        Word *aux =  first_word;
        Word *prev = first_word;
        while(aux->next != nullptr)
        {
            qDebug() << "a";
            prev = aux;
            aux = aux->next;
        }
        aux->next = newWord;
        aux->next->prev = prev;
        aux->next->next = nullptr;
    }
    ui->labelstatus->setText(inputText); //prints last word inputted

    if(inputText == "cu")
    {
        Word *cu = first_word;
        while (cu != nullptr){
            qDebug() << cu->wordText;
            cu = cu->next;

        }
    }



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

