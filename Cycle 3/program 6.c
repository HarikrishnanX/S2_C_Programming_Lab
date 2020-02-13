#include<stdio.h>
void main()
{int a[20][20],b[20][20],c[20][20],i,j,m,n;
printf("Enter number of rows of matrices:");
scanf("%d",&m);
printf("\nEnter number of columns of matrices:");
scanf("%d",&n);
printf("\nEnter elements of matrix 1:");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",(*(a+i)+j));
printf("\nEnter elements of matrix 2:");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",(*(b+i)+j));
printf("\nResultant matrix after subtraction:");
for(i=0;i<m;i++)
{printf("\n");
for(j=0;j<n;j++)
{*(*(c+i)+j)=*(*(a+i)+j)-*(*(b+i)+j);
printf("%d ",*(*(c+i)+j));
}}
}