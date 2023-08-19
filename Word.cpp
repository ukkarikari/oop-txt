// word.cpp
#include "Word.h"

Word::Word(const QString &text, QGraphicsItem *parent)
    : QGraphicsItem(parent), wordText(text)
{
    // Initialize node properties, connections, etc.
}

QRectF Word::boundingRect() const
{
    // Define the bounding rectangle for your node
}

void Word::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // Paint the appearance of your node, including the word representation
}
