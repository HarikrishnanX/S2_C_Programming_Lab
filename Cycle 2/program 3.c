#include<stdio.h>
void main()
{int i,j,k,t,r,a[20];
printf("Enter size of array:");
scanf("%d",&r);
printf("\nEnter elements of array:");
for(i=0;i<r;i++)
scanf("%d",&a[i]);
for(i=0;i<r-1;i++)
{if(a[i]>a[i+1])
{t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}}
for(i=0;i<r;i++)
{for(j=i+1;j<r;)
{if(a[i]==a[j])
{for(k=j;k<r;k++)
{a[k]=a[k+1];
}
r--;
}
else
j++;
}}
printf("\nArray after removing duplicate values:");
for(i=0;i<r;i++)
printf("%d ",a[i]);
} 
