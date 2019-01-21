#include <QApplication>
#include <QGraphicsScene>
#include <hero.h>
#include <QGraphicsView>
#include <monster.h>
#include <QDebug>
#include <QMediaPlayer>
#include <game.h>

Game * game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game = new Game();
    game->show();
    game->displayMainMenu();
    return a.exec();
}
