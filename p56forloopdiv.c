#include<stdio.h>
main()
{
	int i,n,d;
	printf("enter limit :");
	scanf("%d",&n);
	printf("\n enter div:");
	scanf("%d",&d);
	for(i=1; i<=n; i++)
	{
		if(i%d==0)
		{
		printf("\n %d",i);
	}
	}
}
