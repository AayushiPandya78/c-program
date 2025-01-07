#include<stdio.h> 
void sum()
{
	int a,b;

	printf("\nEnter no1 =>");
	scanf("%d",&a);
	printf("\nEnter no2 =>");
	scanf("%d",&b);
	printf("\n sum=%d",a+b);
}
void sub(){
	int a,b;
	printf("\nEnter no1 =>");
	scanf("%d",&a);
	printf("\nEnter no2 =>");
	scanf("%d",&b);
	printf("\n sub=%d",a-b);
}
void mul(){
	int a,b;
	printf("\nEnter no1 =>");
	scanf("%d",&a);
	printf("\nEnter no2 =>");
	scanf("%d",&b);
	printf("\n mul=%d",a*b);
}
void div()
{
	int a,b;
	printf("\nEnter no1 =>");
	scanf("%d",&a);
	printf("\nEnter no2 =>");
	scanf("%d",&b);
	printf("\n div=%d",a/b);
}
int main()
{
	sum();
	sub();
	mul();
	div();
}
