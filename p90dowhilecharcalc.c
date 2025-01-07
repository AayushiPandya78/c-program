#include<stdio.h>
main()
{
	int n1,n2;
	char op;
	do
	{
		printf("\n enter + for addition ");
		printf("\n enter - for subraction");
		printf("\n enter * for multiplication");
		printf("\n enter / for division");
		printf("\n enter $ for exit");
		fflush(stdin);
		printf("\n enter your choice :");
		scanf("%c",&op);
		if(op=='+')
		{
			printf("enter number 1 =");
			scanf("%d",&n1);
			printf("enter number 2 =");
			scanf("%d",&n2);
			printf("\nsum=%d",n1+n2);
		}
		else if(op=='-')
		{
			printf("enter number 1 =");
			scanf("%d",&n1);
			printf("enter number 2 =");
			scanf("%d",&n2);
			printf("\nsub=%d",n1-n2);
		}
		else if(op=='*')
		{
			
			printf("enter number 1 =");
			scanf("%d",&n1);
			printf("enter number 2 =");
			scanf("%d",&n2);
			printf("\nmulti=%d",n1*n2);
		}
		else if(op=='/')
		{
			
			printf("enter number 1 =");
			scanf("%d",&n1);
			printf("enter number 2 =");
			scanf("%d",&n2);
			printf("\ndiv=%d",n1/n2);
	    }
		else if(op=='$')
		{
			printf("\n later alligator ;)");
		}
		
		else
		{
			printf("your choice is wrong");
		}	
	}while(op!=5);
	
}
