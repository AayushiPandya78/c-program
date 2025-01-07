#include<stdio.h>
main()
{
	int i,n;
	printf("enter number :");
	scanf("%d",&n);
	i=1;
	do
	{
		if(i%2==0)
		{
		  printf("\n%d is even",i);
		  i++;	
		}
		else{
			printf("\n%d is odd",i);
			i++;
		}
	}
	while(i<=n);
}

