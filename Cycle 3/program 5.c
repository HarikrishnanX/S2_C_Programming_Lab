#include<stdio.h>
#include<string.h>
void main()
{char *str[25],*t;
int i,n;
printf("\nEnter the number of names:");
scanf("%d",&n);
printf("\nEnter the names:");
for(i=0;i<n;i++)
scanf("%s",str[i]);
for(i=0;i<n;i++)
{if(strcmp(str[i],str[i+1])>0)
{t=str[i];
str[i]=str[i+1];
str[i+1]=t;
}}
printf("\nNames after arranging in alphabetical order:");
for(i=0;i<n;i++)
printf("\n%s",str[i]);
}