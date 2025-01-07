#include<stdio.h>
void add()
{
	int a,b;
	printf("\n enter 2 nos :");
	scanf("%d %d",&a,&b);
	printf("\n sum=%d",a+b);
}
void max2()
{
	int a,b;
	printf("\n enter 2 nos :");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("no1 is greater");
	}
	else 
	{
		printf("no2 is greater");
	}
}
int main()
{
add();
max2();
}
