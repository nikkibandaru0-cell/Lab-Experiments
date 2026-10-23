#include<stdio.h>
void main()
{
    int a;
printf("\nEnter year:");
scanf("%d",&a);
if(a%400==0||(a%4==0&&a%100!=0))
printf("\n%d is leap year",a);
else
printf("\n%d is not leap year",a);
}