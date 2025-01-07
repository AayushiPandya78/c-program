#include<stdio.h>
main()
{
	int n,op;
	do
	{
		printf("\n enter 1 for square ");
		printf("\n enter 2 for cube");
		printf("\n enter 3 for exit");
		printf("\n enter your choice :");
		scanf("%d",&op);
		if(op==1)
		{
			printf("enter number=");
			scanf("%d",&n);
			printf("\nsquare=%d",n*n);
		}
		else if(op==2)
		{
			printf("enter number=");
			scanf("%d",&n);
			printf("\ncube=%d",n*n*n);
		}
		else if(op==3)
		{
			printf("\nBye");
		}
		else
		{
			printf("your choice is wrong");
		}	
	}while(op!=3);
	
}
