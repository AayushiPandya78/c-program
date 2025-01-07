#include<stdio.h>
main()
{
	int n1,n2,op;
	do
	{
		printf("\n enter 1 for addition ");
		printf("\n enter 2 for subraction");
		printf("\n enter 3 for multiplication");
		printf("\n enter 4 for division");
		printf("\n enter 5 for exit");
		printf("\n enter your choice :");
		scanf("%d",&op);
		if(op==1)
		{
			printf("enter number 1 =");
			scanf("%d",&n1);
			printf("enter number 2 =");
			scanf("%d",&n2);
			printf("\nsum=%d",n1+n2);
		}
		else if(op==2)
		{
			printf("enter number 1 =");
			scanf("%d",&n1);
			printf("enter number 2 =");
			scanf("%d",&n2);
			printf("\nsub=%d",n1-n2);
		}
		else if(op==3)
		{
			
			printf("enter number 1 =");
			scanf("%d",&n1);
			printf("enter number 2 =");
			scanf("%d",&n2);
			printf("\nmulti=%d",n1*n2);
		}
		else if(op==4)
		{
			
			printf("enter number 1 =");
			scanf("%d",&n1);
			printf("enter number 2 =");
			scanf("%d",&n2);
			printf("\ndiv=%d",n1/n2);
	    }
		else if(op==5)
		{
			printf("\n later alligator ;)");
		}
		
		else
		{
			printf("your choice is wrong");
		}	
	}while(op!=5);
	
}
