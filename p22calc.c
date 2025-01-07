#include<stdio.h>
main()
{
	int op,no1,no2;
	printf("\n enter 1 for sum");
	printf("\n enter 2 for sub");
	printf("\n enter 3 for mul");
	printf("\n enter 4 for div");
	scanf("%d",&op);
	
if(op==1){
	printf("enter number 1 :");
	scanf("%d",&no1);
	printf("enter number 2 :");
	scanf("%d",&no2);
	printf("sum=%d",no1+no2);
}
else if(op==2){
	printf("enter number 1 :");
	scanf("%d",&no1);
	printf("enter number 2 :");
	scanf("%d",&no2);
	printf("sub=%d",no1-no2);
}
else if(op==3){
	printf("enter number 1 :");
	scanf("%d",&no1);
	printf("enter number 2 :");
	scanf("%d",&no2);
	printf("mul=%d",no1*no2);
}
else if(op==4){
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
