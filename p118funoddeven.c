#include<stdio.h>
void oddeven()
{
	int n;
	printf("\n enter number :");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
}
int main()
{
oddeven();
}
