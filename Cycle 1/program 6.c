#include<stdio.h>
#include<ctype.h>
void main()
{char str[40];
int cu,cl,cd,i;
cu=0;
cd=0;
cl=0;
printf("Enter string:");
scanf("%s",&str);
i=0;
do
{if(isupper(str[i]))
cu++;
else if(islower(str[i]))
cl++;
else if(isdigit(str[i]))
cd++;
i++;
}while(str[i]!='\0');
printf("\nNumber of uppercase letters:%d",cu);
printf("\nNumber of lowercase letters:%d",cl);
printf("\nNumber of digits:%d",cd);
}