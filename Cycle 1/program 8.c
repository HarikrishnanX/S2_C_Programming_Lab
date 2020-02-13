#include<stdio.h>
void main()
{int l,u,i,j,s;
printf("Enter lower limit:");
scanf("%d",&l);
printf("\nEnter upper limit:");
scanf("%d",&u);
printf("\nPrime number(s) in the interval:");
for(i=l;i<=u;i++)
{s=0;
for(j=1;j<=i;j++)
{if(i%j==0)
 s++;
}
if(s==2)
printf("%d ",i);
}
}