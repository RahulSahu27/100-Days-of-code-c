#include <stdio.h>
int main()
{
char alphabet;
printf("enter the alphabet");
scanf("%c ",&alphabet);
if ( alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
{
printf("alphabet is a vowel");
}
else
printf("alphabet is consonant");
return 0;
}
