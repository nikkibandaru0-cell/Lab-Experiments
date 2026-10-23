#include<stdio.h>
#include<math.h>
void main()
{
float p,r,t,amount,compound_interest;
printf("\nEnter principle amount,rate of interest,time period:");
scanf("%f%f%f",&p,&r,&t);
amount=p*pow((1+r/100),t);
compound_interest=amount-p;
printf("Compound Interest=%.2f",compound_interest);
}