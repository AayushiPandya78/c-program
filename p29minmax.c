#include<stdio.h>
main()
{
	int no1,no2,no3;
	printf("enter num1:");
	scanf("%d",&no1);
	printf("enter num2:");
	scanf("%d",&no2);
	printf("enter num3:");
	scanf("%d",&no3);
	
	if(no1>no2 && no1>no3)
	{
		printf("no1 is maximum");
	}
	else if(no2>no1 && no2>no3)
	{
		printf("no2 is maximum");
	}
	else if(no3>no1 && no3>no2)
	{
		printf("no3 is maximum");
	}
	else{
	printf("the numbers are minimum or equal");
	}
}
