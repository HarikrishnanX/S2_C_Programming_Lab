#include<stdio.h>
void main()
{int a,b,s,i,n;
a=0;
b=1;
printf("Enter value of n:");
scanf("%d",&n);
if(n==1)
printf("\n%d",a);
else if(n==2)
printf("\n%d,%d",a,b);
else
{printf("\n%d,%d",a,b);
i=0;
while(s<=n)
{s=a+b;
a=b;
b=s;
if(s<=n)
printf(",%d",s);
}}
}