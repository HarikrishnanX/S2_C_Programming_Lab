#include<stdio.h>
int gcd(int,int);
void main()
{int x,y,g;
printf("Enter 1st number:");
scanf("%d",&x);
printf("\nEnter 2nd number:");
scanf("%d",&y);
g=gcd(x,y);
printf("\nG.C.D of %d and %d=%d",x,y,g);
}
int gcd(int n1,int n2)
{if(n2!=0)
return gcd(n2,n1%n2);
else
return n1;
}