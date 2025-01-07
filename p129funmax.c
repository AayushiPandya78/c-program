#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
main()
{
	int c;
	c=max(5,6);
	printf("\n max=%d",c);
}
