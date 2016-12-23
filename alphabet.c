#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter the alphabet or anything:");
scanf("%c",&ch);
if(ch>=65&&ch<=90||ch>=97&&ch<=122)
{
printf("\n entered is alphabet");
}
else
printf("\n not an alphabet");
}
