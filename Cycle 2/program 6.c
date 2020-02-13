#include<stdio.h>
struct date
{int day;
int month;
int year;
};
struct employee
{int empid;
char name[20];
float pay[6];
struct date dob;
};
void main()
{struct employee emp[6];
int c,n,i,r[6];
clrscr();
printf("Enter number of employees:");
scanf("%d",&n);
printf("\nEnter employee details:");
for(i=0;i<n;i++)
{printf("\nEmployee %d",i+1);
printf("\nEmployee ID:");
scanf("%d",&emp[i].empid);
printf("\nEmployee name:");
gets(emp[i].name);
printf("\nEnter pay:");
scanf("%f",&emp[i].pay[i]);
printf("\nDate of Birth:");
printf("\nDay:");
scanf("%d",&emp[i].dob.day);
printf("\nMonth:");
scanf("%d",&emp[i].dob.month);
printf("\nYear:");
scanf("%d",&emp[i].dob.year);
r[i]=(emp[i].dob.year)+60;
}
printf("\nMenu");
printf("\n1.Pay details\n2.Retirement dates");
printf("\nEnter your choice:");
scanf("%d",&c);
switch(c)
{case 1:printf("\nEmployee ID\tEmployee Name\tSalary");
	for(i=0;i<n;i++)
	{printf("\n%d\t%s\t%f",emp[i].empid,emp[i].name,emp[i].pay[i]);
	}
	break;
 case 2:printf("\nEmployee ID\tEmployee Name\tRetirement Date");
	for(i=0;i<n;i++)
	{printf("\n%d\t%s\t%d-%d-%d",emp[i].empid,emp[i].name,emp[i].dob.day,emp[i],emp[i].dob.month,r[i]);
	}
	break;
 default:printf("\nInvalid choice");
	 break;
}
}