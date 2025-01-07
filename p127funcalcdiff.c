#include<stdio.h>
void sum(int a,int b)
{
	printf("\n sum=%d",a+b);
}
void sub(int a,int b)
{
	printf("\n sub=%d",a-b);
}
void mul(int a,int b)
{
	printf("\n mul=%d",a*b);
}
void div(int a,int b)
{
	printf("\n div=%d",a/b);
}
main()
{
	int a,b;
	printf("\n enter number 1 :");
	scanf("%d",&a);
	printf("\n enter number 2 :");
	scanf("%d",&b);
	
	 sum(a,b);
     sub(a,b);
     mul(a,b);
     div(a,b);
}
