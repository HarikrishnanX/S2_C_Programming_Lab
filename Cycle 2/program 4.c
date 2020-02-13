#include<stdio.h>
void main()
{int a[20][20],r,c,i,j,flag=0;
printf("Enter number of rows:");
scanf("%d",&r);
printf("\nEnter number of columns:");
scanf("%d",&c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
if(a[i][j]!=a[j][i])
flag=1;
if(flag==0)
printf("\nMatrix is symmetric");
else
printf("\nMatrix is not symmetric");
}