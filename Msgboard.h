#ifndef MSGBOARD_H
#define MSGBOARD_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsTextItem>
#include <QBrush>
#include <QKeyEvent>
#include "hero.h"

class MsgBoard: public QObject, public QGraphicsRectItem
{  Q_OBJECT
public:
    MsgBoard(QString name, int x, int y, int width, int height, QGraphicsItem* parent=NULL);
    void keyPressEvent(QKeyEvent *event);
    Hero * hero;
    void showAndDisappear();
private:
    QGraphicsTextItem *text;
};


#endif // MSGBOARD_H
