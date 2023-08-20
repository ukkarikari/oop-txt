#include "editword.h"
#include "ui_editword.h"

EditWord::EditWord(QWidget *parent, QLabel *word) :
    QDialog(parent),
    ui(new Ui::EditWord)
{
    qDebug("tete");
    this->word =  word;
    ui->setupUi(this);



}

EditWord::~EditWord()
{
    delete ui;
}

void EditWord::on_buttonBox_accepted()
{
    int new_font_size = ui->spinBox->value();
    QFont font = this->word->font();
    font.setPointSize(new_font_size);
    this->word->setFont(font);

    this->close();
}

