#include <stdio.h>
int main()
{
char t;
printf("enter a character:");
scanf("%c",&t);

if ( t>='A' && t<='Z' )
{
printf("character is uppercase alphabet");
}
else if ( t>='a' && t<='z')
{
printf("character is lowercase alphabet");
}
else if (t>='0' && t<='9')
{
printf("it is a digit");
}
else 
{
printf(" it is a special character");
}
return 0;
}

