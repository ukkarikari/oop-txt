//mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "editword.h"
#include "Word.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_wordInput_returnPressed();


    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Word *first_word; /// it's the header of the list of words
};
#endif // MAINWINDOW_H
