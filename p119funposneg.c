#include<stdio.h>
void posneg()
{
	int n;
	printf("\n enter number :");
	scanf("%d",&n);
	
	if(n>=0)
	{
		printf("\n positive");
	}
	else
	{
		printf("\n negative");
	}
}
int main()
{
	posneg();
}
