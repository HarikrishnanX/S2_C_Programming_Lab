#include<stdio.h>
int stringlen(char s[]);
void stringcat(char s1[],char s2[]);
void stringcomp(char s1[],char s2[]);
void stringcopy(char s1[],char s2[]);
void main()
{char str1[50],str2[25];
int i,l1,l2,ch;
printf("Enter 1st string:");
gets(str1);
printf("\nEnter 2nd string:");
gets(str2);
printf("\nMenu");
printf("\n1.Length of strings");
printf("\n2.Concatenation of strings");
printf("\n3.Comparison of strings");
printf("\n4.Copying of strings");
printf("\nEnter your choice:");
scanf("%d",&ch);
if(ch==1)
{l1=stringlen(str1);
l2=stringlen(str2);
printf("\nLength of 1st string:%d",l1);
printf("\nLength of 2nd string:%d",l2);
}
else if(ch==2)
{stringcat(str1,str2);
}
else if(ch==3)
{stringcomp(str1,str2);
}
else if(ch==4)
{stringcopy(str1,str2);
}
else
printf("\nInvalid choice");
}
int stringlen(char s[])
{int i,len=0;
for(i=0;s[i]!='\0';i++);
len=i;
return(len);
}
void stringcat(char s1[],char s2[])
{int i,j;
for(i=0;s1[i]!='\0';i++)
{}
for(j=0;s2[j]!='\0';j++)
s1[i+j]=s2[j];
s1[i+j]='\0';
printf("\nString after concatenation:");
puts(s1);
}
void stringcomp(char s1[],char s2[])
{int i,c1=0,c2=0;
for(i=0;s1[i]!='\0';i++)
{if(s1[i]>s2[i])
c1++;
else if(s1[i]<s2[i])
c2++;
else
{c1++;
c2++;}
}
if(c1>c2)
printf("\n%s is greater than %s",s1,s2);
else if(c1<c2)
printf("\n%s is less than %s",s1,s2);
else
printf("\n%s is equal to %s",s1,s2);
}
void stringcopy(char s1[],char s2[])
{int i;
for(i=0;s1[i]!='\0';i++)
s1[i]=s2[i];
s1[i]='\0';
printf("\nString after copying:");
puts(s1);
}
