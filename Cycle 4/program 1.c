#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{char content[80];
char newcontent[80]="";
FILE *fp1, *fp2;
fp1=fopen("details.txt","r");
fp2=fopen("copydetails.txt","w");
if(fp1==NULL||fp2==NULL)
{printf("Error reading file");
exit(0);
}
printf("\nFiles open correctly\n");
while(fgets(content,sizeof(content),fp1)!=NULL)
{fputs(content,stdout);
strcat(newcontent,content);
}
printf("\nText retrieved from original file");
printf("\n%s",newcontent);
fseek(fp1,0L,SEEK_SET);
while(fgets(content,sizeof(content),fp1)!=NULL)
{fprintf(fp2,"%s",content);
}
printf("File created and text copied to it");
fclose(fp1);
fclose(fp2);
}