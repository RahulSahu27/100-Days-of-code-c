#include <stdio.h>
int main ()
{ 
float r;// r=radius
float area,circumferece;

printf(" enter r of a circle:");
scanf ("%f", &r);

area=3.14*r*r;
printf ("area is %f",area);

circumferece=2*3.14*r;
printf ("circumferece is %f",circumferece);

return 0;
}
