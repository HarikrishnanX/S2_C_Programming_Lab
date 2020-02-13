#include<stdio.h>
void main()
{float s1,s2,s3,t,per;
char grade[15]="Place holder";
printf("Enter mark in subject 1:");
scanf("%f",&s1);
printf("\nEnter mark in subject 2:");
scanf("%f",&s2);
printf("\nEnter mark in subject 3:");
scanf("%f",&s3);
t=s1+s2+s3;
per=t/3;
if(per>=75)
grade="Distinction";
else if(per>=60)
grade="1st class";
else if(per>=50)
grade="2nd class";
else if(per>=45)
grade="Pass";
else
grade="Fail";
printf("\nGrade of student:%s",grade);
}
