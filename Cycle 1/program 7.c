#include<stdio.h>
void main()
{int a,b,c;
float d,x1,x2;
printf("Enter coefficient of x^2:");
scanf("%d",&a);
printf("\nEnter coefficient of x:");
scanf("%d",&b);
printf("\nEnter constant:");
scanf("%d",&c);
d=(b*b)-(4*a*c);
if(d>0)
{printf("\nRoots are real amd unequal");
x1=((-b)+sqrt(d))/(2*a);
x2=((-b)-sqrt(d))/(2*a);
printf("\n%f,%f",x1,x2);
}
else if(d<0)
printf("\nRoots are imaginary");
else if(d==0)
{printf("\nRoots are real and equal");
x1=(-b)/(2*a);
x2=(-b)/(2*a);
printf("\n%f,%f",x1,x2);
}
}