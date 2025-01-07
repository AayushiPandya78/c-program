#include<stdio.h>
struct employee
{
	int eno;
	char ename[100];
	int salary;
};
main()
{
	struct employee e1,e2,e3;
	printf("\n enter eno :");
	scanf("%d",&e1.eno);
	fflush(stdin);
	printf("\n enter ename :");
	gets(e1.ename);
	printf("\n enter salary :");
	scanf("%d",&e1.salary);
	
	printf("\n enter eno :");
	scanf("%d",&e2.eno);
	fflush(stdin);
	printf("\n enter ename :");
	gets(e2.ename);
	printf("\n enter salary :");
	scanf("%d",&e2.salary);
	
	printf("\n enter eno :");
	scanf("%d",&e3.eno);
	fflush(stdin);
	printf("\n enter ename :");
	gets(e3.ename);
	printf("\n enter salary :");
	scanf("%d",&e3.salary);
	
      printf("\n e1 eno=%d ename=%s esalary=%d",e1.eno,e1.ename,e1.salary);
	printf("\n  e2 eno=%d ename=%s esalary=%d",e2.eno,e2.ename,e2.salary);
	printf("\n  e3 eno=%d ename=%s esalary=%d",e3.eno,e3.ename,e3.salary);
}

