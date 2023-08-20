// word.h
#ifndef WORD_H
#define WORD_H

#include <QGraphicsItem>
#include <QPainter>

///
/// \brief The Word class which represents a word '-'
///
class Word : public QGraphicsItem
{
public:
    Word(const QString &text, QGraphicsItem *parent = nullptr);

    // override boundingRect and paint methods
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    Word *prev;
    Word *next;

    QString wordText; /// text lmao kekw

private:
 //   QString wordText; /// text lmao kekw
    QColor color;
    double font_size;



};

#endif // WORD_H
