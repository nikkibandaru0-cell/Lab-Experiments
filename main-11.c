#include<stdio.h>
void main()
{
float speed,time,distance;
printf("\nEnter Speed in km/hr and Time in hr:");
scanf("%f%f",&speed,&time);
distance=speed*time;
printf("Distance Travelled=%.2f",distance);
}