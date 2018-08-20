#include "draw.h"

int main(){
  draw::setpenwidth(1);
  draw::setcolor(draw::RED);
  draw::point(0.5,0.5);

  draw::line(0,0,0.4,0.4);

  draw::filled_square(0.5,0.5,0.2);
  
  draw::setcolor(draw::GREEN);
  draw::filled_circle(0.7,0.7,0.1);
}
