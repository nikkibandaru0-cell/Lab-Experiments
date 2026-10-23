#include<stdio.h>
void main()
{
float p,r,t,simple_interest;
printf("\n1.Enter principle amount,rate of interest and time period:");
scanf("\n%f%f%f",&p,&r,&t);
simple_interest=(p*t*r)/100;
printf("\nsimple interest=%.2f",simple_interest);
}