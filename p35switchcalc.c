#include<stdio.h>
main()
{
	int no1,no2,op;
	printf("\n enter 1 for sum");
	printf("\n enter 2 for sub");
	printf("\n enter 3 for mul");
	printf("\n enter 4 for div");
	printf("\n enter your choice :-");
	scanf("%d",&op);
	
switch(op)
{
	case 1:
		printf("\n enter number 1 :");
		scanf("%d",&no1);
		printf("\n enter number 2 :");
		scanf("%d",&no2);
		printf("sum=%d",no1+no2);
		break;
	case 2:
		printf("\n enter number 1 :");
		scanf("%d",&no1);
		printf("\n enter number 2 :");
		scanf("%d",&no2);
		printf("sub=%d",no1-no2);
		break;
	case 3:
		printf("\n enter number 1 :");
		scanf("%d",&no1);
		printf("\n enter number 2 :");
		scanf("%d",&no2);
		printf("mul=%d",no1*no2);
		break;
	case 4:
		printf("\n enter number 1 :");
		scanf("%d",&no2);
		printf("\n enter number 2 :");
		scanf("%d",&no2);
		printf("div=%d",no1/no2);
		break;
	default:
		printf("There is an error");
}
}
