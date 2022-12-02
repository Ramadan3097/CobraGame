//Programming technique II (SCSJ1023)
// semester 1, 2020/2021

//? Game project
//? Members: Ahmad Kemal Aushaf
//?          Ahmed Abdalla Ramadan 
//?          Muhammad Faris Ibrahim
//?          Muhammad Aqila Karindra Daffa

#include <graphics.h>
#include <string>
#include "Snake.hpp"
#include "GameLogic.hpp"

int main()
{
    //code
	initwindow(1280, 720, "Cobra Game");

    Snake s1(Point(500, 200), 20);
    //Snake s2(Point(600, 400), 20);

    GameLogic g1;
    g1.setSnake(&s1); 
    //s2.draw();
    g1.start();

    // s1.draw();
    // delay(4000);
    // s1.undraw();
    // while(!kbhit()){
    //     delay(33);
    //     s1.move();
    // }


    system("pause");
    return 0;
}