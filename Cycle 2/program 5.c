#include<stdio.h>
void main()
{int s,i,j,k,a[20][20],b[20][20],c[30][30],r1,r2,c1,c2;
printf("Enter number of rows of 1st matrix:");
scanf("%d",&r1);
printf("\nEnter number of columns of 1st matrix:");
scanf("%d",&c1);
printf("\nEnter elements of 1st matrix:");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
printf("\nEnter number of rows of 2nd matrix:");
scanf("%d",&r2);
printf("\nEnter number of columns of 2nd matrix:");
scanf("%f",&c2);
printf("\nEnter elements of 2nd matrix:");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
if(c1!=r2)
printf("\nMatrices can't be multiplied");
else
{printf("\nMatrices can be multiplied");
for(i=0;i<r1;i++)
{printf("\n");
for(j=0;j<c2;j++)
{s=0;
for(k=0;k<c1;k++)
s+=a[i][k]*b[k][j];
c[i][j]=s;
printf("%d ",c[i][j]);
}}}
}