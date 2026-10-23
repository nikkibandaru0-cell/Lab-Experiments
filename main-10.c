#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;
printf("\nThree sides of a triangle:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of triangle=%.2f",area);
}