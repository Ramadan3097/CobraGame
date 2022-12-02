#include <graphics.h>
#include "snake.hpp"

Snake::Snake(Point _location, int _size)
{
    set(_location, _size);
    setColor(GREEN);
    refreshPos();

    dx = dy = 0;

}


//? Setters / accessors
void Snake::setLocation(Point value) { location = value; }
void Snake::setSize(int value) { size = value; }
void Snake::setColor(int value) { color = value;}
void Snake::set(Point _location, int _size)
{
    setLocation(_location);
    setSize(_size);
}
void Snake::setSpeed(int _dx, int _dy)
{
    dx = _dx;
    dy = _dy;
}

//? Getters / Mutators
Point Snake::getLocation() const { return location; }
int Snake::getSize() const { return size; }
int Snake::getColor() const { return color; }
int Snake::getLeft() const { return left; }
int Snake::getRight() const { return right; }
int Snake::getTop() const { return top; }
int Snake::getBottom() const { return bottom; }

//? Functional Methods
void Snake::draw() const
{
    // setcolor(color); //probably useless when we implement bar
    setfillstyle(SOLID_FILL, color);
    bar(getLeft(), getTop(), getRight(), getBottom());
}

void Snake::undraw() const
{
    setfillstyle(SOLID_FILL, BLACK);
    bar(getLeft(), getTop(), getRight(), getBottom());
}

void Snake::refreshPos()
{
    left = location.getX() - (size/2);
    right = location.getX() + (size/2);
    top = location.getY() - (size/2);
    bottom = location.getY() + (size/2);
}

void Snake::move()
{
    undraw();
    location.move(dx, dy);
    refreshPos();
    draw();
}