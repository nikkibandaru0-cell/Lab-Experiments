#include<stdio.h>
void main()
{
int units;
float bill;
printf("Enter no:of units consumed:");
scanf("%d",&units);
if(units<=100)
bill=units*1.50;
else if(units>=101&&units<=200)
bill=units*2.50;
else if(units>=201&&units<=500)
bill=units*4.00;
else if(units>500)
bill=units*6.00;
printf("\nElectricity bill=Rs%.2f",bill);
}