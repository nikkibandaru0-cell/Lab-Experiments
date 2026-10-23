#include<stdio.h>
void main()
{
int A,B,C,D,E,F,G,i,J,K,L,M;
printf("Enter values ofA,B,C,D,E,F,G,i");
scanf("%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&i);
K=A+B*C+(D*E)+F*G;
printf("\nA+B*C+(D*E)+F*D=%d",K);
L=A/B*C-B+A*D/3;
printf("\nA/B*C-B+A*D/3=%d",L);
M=A+++B---A;
printf("\nA+++B---A=%d",M);
J=(i++)+(++i);
printf("\n(i++) + (++i)=%d",J);
}