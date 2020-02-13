#include<stdio.h>
void main()
{int a,b,c;
float r;
printf("Calculator\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice:");
scanf("%d",&c);
printf("\nEnter 1st number:");
scanf("%d",&a);
printf("\nEnter 2nd number:");
scanf("%d",&b);
switch(c)
{case 1:r=a+b;
	printf("\nSum=%f",r);
	break;
case 2:r=a-b;
       printf("\nDifference=%f",r);
       break;
case 3:r=a*b;
       printf("\nResult=%f",r);
       break;
case 4:r=a/b;
       printf("\nResult=%f",r);
       break;
default:printf("\nInvalid choice");
	break;
}
}