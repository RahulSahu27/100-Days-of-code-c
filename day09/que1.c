#include <stdio.h>
#include <math.h>
int main ()
{
float a,b,c;
float r1,r2,d;
printf ("enter three variables:");
scanf ("%f %f %f",&a ,&b,&c);

d=b*b-4*a*c;
if (d>0)
{
r1 = (-b + sqrt(d)) / (2 * a);
r2 = (-b - sqrt(d)) / (2 * a);
 
printf("roots are real and different:%.2f,%.2f",r1,r2);
}
else if (d==0)
{
r1=-b/(2*a);

printf("real and equal root");
}
else if (d<0)
{
printf("complex");
}
return 0;
}
