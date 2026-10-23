#include<stdio.h>
void main()
{
    int choice;
    float a,b;
printf("\nENTER TWO NUMBERS:");
scanf("%f%f",&a,&b);
printf("\n1.Addition");
printf("\n2.Subtraction");
printf("\n3.Multiplication");
printf("\n4.Division");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("%f+%f=%f",a,b,a+b);
    break;
    
    case 2:
    printf("%f-%f=%f",a,b,a-b);
    break;
    
    case 3:
    printf("%f*%f=%f",a,b,a*b);
    break;
    
    case 4:
    printf("%f/%f=%f",a,b,a/b);
    break;
    
    default:
    printf("Invalid option");
}
}