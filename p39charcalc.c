#include<stdio.h>
main()
{
	int no1,no2;
	char op;
	printf("\n enter a for sum");
	printf("\n enter b for sub");
	printf("\n enter c for mul");
	printf("\n enter d for div");
	printf("\n enter your choice :-");
	scanf("%c",&op);
	
switch(op)
{
	case 'a':
	case 'A':
		printf("\n enter number 1 :");
		scanf("%d",&no1);
		printf("\n enter number 2 :");
		scanf("%d",&no2);
		printf("sum=%d",no1+no2);
		break;
	case 'b':
	case 'B':
		printf("\n enter number 1 :");
		scanf("%d",&no1);
		printf("\n enter number 2 :");
		scanf("%d",&no2);
		printf("sub=%d",no1-no2);
		break;
	case 'c':
	case 'C':
		printf("\n enter number 1 :");
		scanf("%d",&no1);
		printf("\n enter number 2 :");
		scanf("%d",&no2);
		printf("mul=%d",no1*no2);
		break;
	case 'd':
	case 'D':
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
