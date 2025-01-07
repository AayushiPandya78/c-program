#include<stdio.h>
main()
{
	int i,n;
	printf("enter limit = :");
	scanf("%d",&n);
	i=1;
	do
	{
    	printf("%d X",i);
    	i++;
	}
	while(i<=n);
}

