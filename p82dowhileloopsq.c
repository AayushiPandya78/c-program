#include<stdio.h>
main()
{
	int i,n;
	printf("enter limit : ");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\n %d - %d",i,i*i);
		i++;
	}
	while(i<=n);
}
