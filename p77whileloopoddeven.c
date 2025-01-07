#include<stdio.h>
main()
{
	int i,n;
	printf("enter number :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
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
}

