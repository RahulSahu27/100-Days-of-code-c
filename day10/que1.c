#include <stdio.h>
int main()
{
int a,b,c;
printf("enter three sidelength of a triangle");
scanf("%d %d %d",&a,&b,&c);

if (a==b && b==c && c==a)
{
printf("triangle is equivalent");
}
else if (a==b||b==c||c==a)
{
printf("triangle is isoscelene");
}
else 
{
printf("triangle is scelene");
}
return 0;
}
