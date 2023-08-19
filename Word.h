// word.h
#ifndef WORD_H
#define WORD_H

#include <QGraphicsItem>
#include <QPainter>

class Word : public QGraphicsItem
{
public:
    Word(const QString &text, QGraphicsItem *parent = nullptr);

    // override boundingRect and paint methods
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    QString wordText;
};

#endif // WORD_H
