#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
printf("\n enter 3 numbers:");
scanf("%d %d %d ",&i,&j,&k);
if((i>j)&&(i>k))
    printf("\n %d is the largest number",i);
else if(j>k)
    printf("\n %d is the largest number",j);
else
    printf("\n %d is the largest number",k);

getch();
}
