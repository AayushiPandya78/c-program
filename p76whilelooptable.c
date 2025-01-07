#include<stdio.h>
main()
{
	int i,n;
	printf("enter limit :");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		printf("\n%d x %d = %d",n,i,i*n);
		i++;
	}
}
