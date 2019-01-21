#include "Msgboard.h"
#include "game.h"
#include <unistd.h>

/*这个class原本是为了碰到npc的时候弹出来的时候用的，但是弹出的对话框如果被给了focus，就没法再给回去英雄去了
但是这个类应该还是要用上的*/




extern Game * game;

MsgBoard::MsgBoard(QString name, int x, int y, int width, int height, QGraphicsItem *parent): QGraphicsRectItem (parent)
{
    setRect(x, y, width, height);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::darkCyan);
    setBrush(brush);

    text = new QGraphicsTextItem(name, this);
    int xPos = rect().width()/2 - text->boundingRect().width()/2;
    int yPos = rect().height()/2 - text->boundingRect().height()/2;
    text->setPos(xPos, yPos);

}

void MsgBoard::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Space)
    {
        game->scene->removeItem(this);
        delete this;
    }
}


