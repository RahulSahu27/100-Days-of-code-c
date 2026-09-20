#include <stdio.h>
int main()
{
int y;
printf("enter a year:");
scanf("%d",&y);
if (y>=1000 && y<=9999)
{
if (y%4==0)
{
printf("y is a leap year");
}
else
printf ("y is not a leap year ");
}
return 0;
}
