#include<stdio.h>
void sqcube()
{
	int i,n;
	printf("\n enter number :");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("\n %d -- %d -- %d", i, i*i, i*i*i);
	}
}
int main()
{
	sqcube();
}
