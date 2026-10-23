#include<stdio.h>
void main()
{
int a,b,c,d,max,min;
printf("Enter any four numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=(a>b)?a:b;
max=(max>c)?max:c;
max=(max>d)?max:d;
printf("\nMaximum of four numbers=%d",max);
min=(a<b)?a:b;
min=(min<c)?min:c;
min=(min<d)?min:d;
printf("\nMinimum of four numbers=%d",min);
}