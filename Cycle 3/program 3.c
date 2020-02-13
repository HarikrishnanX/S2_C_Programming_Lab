#include<stdio.h>
int factorial(int);
void main()
{int n,f;
printf("Enter a number:");
scanf("%d",&n);
f=factorial(n);
printf("\nFactorial of %d=%d",n,f);
}
int factorial(int num)
{int fact;
if(num==1)
return 1;
else
fact=num*factorial(num-1);
return fact;
}