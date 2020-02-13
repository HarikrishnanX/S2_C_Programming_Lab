#include<stdio.h>
struct date
{int day;
int month;
int year;
};
struct student 
{int rollno;
char name[20];
struct date dob;
float marks; 
}s[50],w,x,y,z,t;
void main()
{int n,i,c,r;
FILE *fp1;
FILE *fp2;
printf("Enter number of students : ");
scanf("%d",&n);
fp1=fopen("Students","wb");
for(i=0;i<n;i++)
{printf("\nEnter details of student %d:",i+1);
printf("\nEnter roll no:");
scanf("%d",&s[i].rollno);
printf("\nEnter name:");
scanf("%s",s[i].name);
printf("\nEnter date of birth:");
printf("\nDay:");
scanf("%d",&s[i].dob.day);
printf("\nMonth:");
scanf("%d",&s[i].dob.month);
printf("\nYear:");
scanf("%d",&s[i].dob.year);
printf("\nEnter marks:");
scanf("%f",&s[i].marks);
fwrite(&s[i],sizeof(struct student),1,fp1);
} 
fclose(fp1);
do
{printf("\nMenu\n1.Add record\n2.Delete record\n3.Modify record\n4.Display records\nEnter your choice:");
scanf("%d",&c);
switch(c)
{case 1:fp1=fopen("Students","ab");
	printf("\nEnter details of new student:");
	printf("\nEnter roll no:");
	scanf("%d",&x.rollno);
	printf("\nEnter name:");
	scanf("%s",x.name);
	printf("\nEnter date of birth:");
	printf("\nDay:");
	scanf("%d",&x.dob.day);
	printf("\nMonth:");
	scanf("%d",&x.dob.month);
	printf("\nYear:");
	scanf("%d",&x.dob.year);
	printf("\nEnter marks:");
	scanf("%f",&x.marks);
	fwrite(&x,sizeof(struct student),1,fp1);
	fclose(fp1);
	n++;
	break;
 case 2:fp1=fopen("Students","rb");
	fp2=fopen("Temp","wb");
	struct student y;
	printf("\nEnter roll no of student to delete:");
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{fread(&y,sizeof(struct student),1,fp1);
	if(y.rollno==r)
	{continue;
	}
	fwrite(&y,sizeof(struct student),1,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	n--;
	remove("Students");
	rename("Temp","Students");
	break;
 case 3:fp1=fopen("Students","rb");
	fp2=fopen("Temp","wb");
	printf("\nEnter roll no of student to modify:");
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{fread(&z,sizeof(struct student),1,fp1);
	if(z.rollno==r)
	{printf("\nEnter modified data:");
	printf("\nEnter modified name:");
	scanf("%s",t.name);
	printf("\nEnter modified date of birth:");
	printf("\nDay:");
	scanf("%d",&t.dob.day);
	printf("\nMonth:");
	scanf("%d",&t.dob.month);
	printf("\nYear:");
	scanf("%d",&t.dob.year);
	printf("\nEnter marks:");
	scanf("%f",&t.marks);
	fwrite(&t,sizeof(struct student),1,fp2);
	continue;
	}
	fwrite(&z,sizeof(struct student),1,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	remove("Students");
	rename("Temp","Students");
	break;
 case 4:fp1=fopen("Students","rb");
	for(i=0;i<n;i++)
	{fread(&w,sizeof(struct student),1,fp1);
	printf("\nStudent %d\nRoll No:%d\nName:%s\nDate of birth:%d-%d-%d\nMarks:%f",i+1,w.rollno,w.name,w.dob.day,w.dob.month,w.dob.year,w.marks);
	}
	fclose(fp1);
	break;
default:printf("\nInvalid choice");
	break;
}
}while(c!=5);
}