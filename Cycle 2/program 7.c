#include <stdio.h>
#include <string.h>
struct struct_example
{
int integer;
float decimal;
char name[20];
};
union union_example
{
int integer;
float decimal;
char name[20];
};
void main()
{struct struct_example s={18,38.0,"Test"};
union union_example u={18,38.0,"Test"};
printf("Structure Data:\nInteger:%d\nDecimal:%.2f\nName:%s\n",s.integer,s.decimal,s.name);
printf("\nUnion Data:\nInteger:%d\nDecimal:%.2f\nName:%s\n",u.integer,u.decimal,u.name);
printf("\nSize of Structure:%d\n",sizeof(s));
printf("Size of Union:%d\n",sizeof(u));
printf("\nAccessing all members at a time:"); 
s.integer=183;
s.decimal=90;
strcpy(s.name,"Testing again");
printf("\nStructure Data:\nInteger:%d\nDecimal:%.2f\nName:%s\n",s.integer,s.decimal,s.name);
u.integer=183;
u.decimal=90;
strcpy(u.name,"Testing again");
printf("\nUnion Data:\nInteger:%d\nDecimal:%.2f\nName:%s\n",u.integer,u.decimal,u.name);
printf("\nAccessing one member at time:");
printf("\nStructure Data:");
s.integer=240;
printf("\nInteger:%d",s.integer);
s.decimal=120;
printf("\nDecimal:%f",s.decimal);
strcpy(s.name,"C programming");
printf("\nName:%s\n",s.name);
printf("\nUnion Data:");
u.integer=240;
printf("\nInteger:%d",u.integer);
u.decimal=120;
printf("\nDecimal:%f",u.decimal);
strcpy(u.name,"C programming");
printf("\nName:%s\n",u.name);
printf("\nAltering a member value:\n");
s.integer=1218;
printf("Structure Data:\nInteger:%d\nDecimal:%.2f\nName:%s\n",s.integer,s.decimal,s.name);
u.integer=1218;
printf("Union Data:\nInteger:%d\nDecimal:%.2f\nName:%s\n",u.integer,u.decimal,u.name); 
}