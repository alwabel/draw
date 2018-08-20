#ifndef TURTLE_H
#define TURTLE_H
#include <cmath>
#include "draw.h"
/* Credits for Turtle.h goes to cs103 usc */
class Turtle {
public:
    Turtle(double,double,double);
    void move(double dist);
    void turn(double degree);
    void setColor(Color c);
    void off();
    void on();
private:  
    Color c;
    double x,y,deg;
    bool d;
};    
#endif
