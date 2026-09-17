#include <stdio.h>
int main ()
double r;// r=radius
float area,circumferece;

printf(" enter r of a circle:");
scanf ("%f", &r);
double r2 = pow(r, 2);
area=3.14*r2;
printf ("area is %f",area);

circumferece=2*3.14*r;
printf ("circumferece is %f",circumferece);

return 0;
}
