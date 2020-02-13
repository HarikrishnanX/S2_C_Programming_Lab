#include<stdio.h>
#include<string.h>
void main()
{char str1[50],str2[20];
printf("Enter string:");
gets(str1);
printf("\nEnter substring:");
gets(str2);
if(strstr(str1,str2)==NULL)
printf("\n%s is not present in %s",str2,str1);
else
printf("\n%s is present in %s",str2,str1);
}
