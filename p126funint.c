#include<stdio.h>
void square(int a)
{
	printf("\n square=%d",a*a);
}
void cube(int a)
{
	printf("\n cube=%d",a*a*a);
}
main()
{
	int a;
	printf("\n enter number :");
	scanf("%d",&a);
	
	square(a);
	cube(a);
}
