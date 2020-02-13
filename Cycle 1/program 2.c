#include<stdio.h>
void main()
{int n,a,r,d;
printf("Enter the number:");
scanf("%d",&n);
r=0;
a=n;
while(n>0)
{d=n%10;
r=(10*r)+d;
n=n/10;
}
if(a==r)
printf("%d is a palindrome",a);
else
printf("%d is not a palindrome",a);
}