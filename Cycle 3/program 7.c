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
}emp[6],*ptr;
void main()
{int c,n,i,r[6];
clrscr();
printf("Enter number of employees:");
scanf("%d",&n);
printf("\nEnter employee details:");
i=0;
for(ptr=emp;ptr<(emp+n);ptr++)
{printf("\nEmployee %d",i+1);
printf("\nEmployee ID:");
scanf("%d",&ptr->empid);
printf("\nEmployee name:");
gets(ptr->name);
printf("\nEnter pay:");
scanf("%f",&ptr->pay[i]);
printf("\nDate of Birth:");
printf("\nDay:");
scanf("%d",&ptr->dob.day);
printf("\nMonth:");
scanf("%d",&ptr->dob.month);
printf("\nYear:");
scanf("%d",&ptr->dob.year);
r[i]=(ptr->dob.year)+60;
i++;
}
printf("\nMenu");
printf("\n1.Pay details\n2.Retirement dates");
printf("\nEnter your choice:");
scanf("%d",&c);
switch(c)
{case 1:printf("\nEmployee ID\tEmployee Name\tSalary");
	for(ptr=emp;ptr<(emp+n);ptr++)
	{printf("\n%d\t%s\t%f",ptr->empid,ptr->name,ptr->pay[i]);
	}
	break;
 case 2:printf("\nEmployee ID\tEmployee Name\tRetirement Date");
	for(ptr=emp;ptr<(emp+n);ptr++)
	{printf("\n%d\t%s\t%d-%d-%d",ptr->empid,ptr->name,ptr->dob.day,ptr->dob.month,r[i]);
	}
	break;
 default:printf("\nInvalid choice");
	 break;
}
}