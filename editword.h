#ifndef EDITWORD_H
#define EDITWORD_H

#include <QDialog>
#include <QLabel>
namespace Ui {
class EditWord;
}

class EditWord : public QDialog
{
    Q_OBJECT

public:
    explicit EditWord(QWidget *parent = nullptr, QLabel *word = nullptr);
    ~EditWord();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EditWord *ui;
    QLabel *word;
};

#endif // EDITWORD_H
