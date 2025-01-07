#include<stdio.h>
main()
{
	int no1,no2;
	char op;
	printf("\n enter + for sum");
	printf("\n enter - for sub");
	printf("\n enter m for mul");
	printf("\n enter / for div");
	printf("\n enter ->");
	scanf("%c",&op);
	
if(op=='+'){
	printf("enter number 1 :");
	scanf("%d",&no1);
	printf("enter number 2 :");
	scanf("%d",&no2);
	printf("sum=%d",no1+no2);
}
else if(op=='-'){
	printf("enter number 1 :");
	scanf("%d",&no1);
	printf("enter number 2 :");
	scanf("%d",&no2);
	printf("sub=%d",no1-no2);
}
else if(op=='m'){
	printf("enter number 1 :");
	scanf("%d",&no1);
	printf("enter number 2 :");
	scanf("%d",&no2);
	printf("mul=%d",no1*no2);
}
else if(op=='/'){
	printf("enter number 1 :");
	scanf("%d",&no1);
	printf("enter number 2 :");
	scanf("%d",&no2);
	printf("div=%d",no1/no2);
}
else{
	printf("it is a wrong option");
}
}
