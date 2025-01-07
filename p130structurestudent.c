#include<stdio.h>
struct student
{
	int rno;
	char sname[100];
	int fees;
};
main()
{
struct student s1,s2,s3;

printf("\nEnter rno =>");
scanf("%d",&s1.rno);

fflush(stdin);
printf("\nEnter sname =>");
gets(s1.sname);

printf("\nEnter fees =>");
scanf("%d",&s1.fees);

//s2
//s3

printf("\nrno = %d sname = %s fees = %d",s1.rno,s1.sname,s1.fees);
//s2
//s3
}
