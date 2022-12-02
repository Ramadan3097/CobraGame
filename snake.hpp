#include "point.hpp"
#include <string>

#ifndef SNAKE_H
#define SNAKE_H

class Snake
{
    private:
    Point location;
    int size, color;
    int left, top, right, bottom;
    int dx, dy;
    //string direction;

    public:
    //!constructors
    Snake(Point _location = Point(0, 0), int _size = 20);

    //!Setters
    void setLocation(Point value);
    void setSize(int size);
    void setColor(int value);
    void set(Point _location, int _size);
    void setSpeed(int _dx, int _dy);

    //!Getters
    Point getLocation() const;
    int getSize() const;
    int getColor() const;
    int getLeft() const;
    int getRight() const;
    int getTop() const;
    int getBottom() const;

    //!Native Methods
    void draw() const;
    void undraw() const;

    void refreshPos();
    void move();
};

#endif