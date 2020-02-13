#include<stdio.h>
#include<string.h>
void main()
{char str[20];
int l,i,j,highest=0,count=0,var;
printf("Enter a string: ");
gets(str);
l=strlen(str);
for(i=0;i<l-1;i++)
{for(j=i+1;j<=l;j++)
{if(str[i]==str[j])
{count++;
}
}
if(count>highest)
{highest=count;
var=i;
}
}
printf("\nThe highest frequency character is: %c\n",str[var]);
}