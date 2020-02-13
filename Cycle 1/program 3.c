#include<stdio.h>
#include<math.h>
void main()
{int n,s1,s2,i,x;
float m,sd;
printf("Enter number of terms:");
scanf("%d",&n);
s1=0;
s2=0;
printf("\nEnter the terms:");
for(i=0;i<n;i++)
{scanf("%d",&x);
s1+=x;
s2+=(x*x);
}
m=s1/n;
sd=sqrt((s2/n)-(m*m));
printf("\nMean=%f\nStandard deviation=%f",m,sd);
}