#include<stdio.h>
void table()
{
	int i,n;
	printf("\n enter no :");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		printf("\n%d x %d = %d",n,i,i*n);	
	}
}
int main()
{
	table();
}
