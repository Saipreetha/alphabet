#include<stdio.h>
main()
{
int b,j,t=1,s=1;
printf("\n enter the number:");
scanf("%d",&b);
for(j=1;j<=b;j++)
{t=j;
s=s*j;
}
printf("\n the factorial of a given number is:%d",s);
}
