#include "snake.hpp"

#ifndef GAMELOGIC_H
#define GAMELOGIC_H

class GameLogic
{
    private:
    enum directions { UP, DOWN, LEFT, RIGHT };
    directions dir;
    Snake *snake;

    public:
    GameLogic();
    
    void setSnake(Snake *_snake);
    void getKeyStroke();
    void getSnakeMovement();

    void play();
    void start();
    void loop();

    void movementLoop();
};
#endif