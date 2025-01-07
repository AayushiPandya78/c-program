#include<stdio.h>
main()
{
	int i,n;
	printf("enter limit :");
	scanf("%d",&n);
	i=n;
     do
	{
		printf("%d X",i);
		i--;
	}
	while(i>=1);
}
