#include "turtle.h"
#include "draw.h"
Turtle::Turtle(double x0,double y0,double deg) { 
    this->x = x0;
    this->y = y0;
    this->deg = deg;
    //draw::setcolor(Color());
    this->d = true;
}

void Turtle::setColor(Color c) { 
    this->c.red = c.red;
    this->c.green = c.green;
    this->c.blue = c.blue;
    //draw::setcolor(c);
}
void Turtle::move(double dist) {
    double x,y;
    x = this->x; y = this->y;
    this->x += dist*cos((this->deg*M_PI)/180 );
    this->y += dist*sin((this->deg*M_PI)/180 );
    if(this->d) {
        draw::setcolor(c);
        draw::line(x,y,this->x,this->y);
    }        

}

void Turtle::turn(double degree) { 
    this->deg += degree;
}

void Turtle::on() { 
    this->d = true;
}

void Turtle::off() { 
    this->d = false;
}    
