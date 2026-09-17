#include <stdio.h>
int main()
{
int  length,breadth;
int  area,perimeter;
printf("enter length,breadth");
scanf( "%d %d",&length ,&breadth);

area=length*breadth;
printf("area is %d\n",area);

perimeter=2*(length+breadth);
printf("perimeter is %d\n",perimeter);

return 0;
}
