#include "turtle.h"
#include "draw.h"

/* Credit goes to Vincent */
int main() 
{

   draw::setpenwidth(10); // thick lines
   draw::setrange(-100, 100);
   Turtle gg(-50, 50, 0); 
   for(int i =0; i<60; i++)
   {
   draw::show(10);

   	if(i%2==0)
   		gg.setColor(draw::RED);
   	else
   		gg.setColor(draw::GREEN);

   		gg.move(20);
   		gg.turn(360-6*i);


   }
    return 0;
}
