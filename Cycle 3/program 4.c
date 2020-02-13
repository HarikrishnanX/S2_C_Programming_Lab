#include<stdio.h>
void swap(int *,int *);
void main()
{int a,b;
printf("Enter 1st number:");
scanf("%d",&a);
printf("\nEnter 2nd number:");
scanf("%d",&b);
swap(&a,&b);
}
void swap(int *p1,int *p2)
{int *temp;
temp=p1;
p1=p2;
p2=temp;
printf("\nValues after swap are:%d and %d",*p1,*p2);
}
