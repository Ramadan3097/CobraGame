#include "gameLogic.hpp"
#include <graphics.h>

#define KEY_UP 72          
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

GameLogic::GameLogic()
{
    snake = NULL;
}

void GameLogic::setSnake(Snake *_snake) { snake = _snake; }

void GameLogic::getKeyStroke(){
    if (kbhit()) {
            switch (getch()) {
            case 'a': case 'A': case KEY_LEFT:
                if (dir != RIGHT) dir = LEFT;
                break;
            case 'd': case 'D': case KEY_RIGHT:
                if (dir != LEFT) dir = RIGHT;
                break;
            case 'w': case 'W': case KEY_UP:
                if (dir != DOWN) dir = UP;
                break;
            case 's': case 'S': case KEY_DOWN:
                if (dir != UP) dir = DOWN;
                break;
            }
        }

}

void GameLogic::getSnakeMovement(){
      if (dir == LEFT) 
        {
            snake->setSpeed(-20, 0);
            snake->move();
        }
        else if (dir == RIGHT) 
        {
            snake->setSpeed(20, 0);
            snake->move();
        }
        else if (dir == UP) 
        {
            snake->setSpeed(0, -20);
            snake->move();
        }
        else if (dir == DOWN) 
        {
            snake->setSpeed(0, 20);
            snake->move();
        }
        else return;
}

void GameLogic::start(){
    snake->draw();
    play();
}
void GameLogic::play(){
    getKeyStroke();
    getSnakeMovement();
    loop();
}
void GameLogic::loop(){
    delay(66);
    play();
}

void GameLogic::movementLoop(){
    
}