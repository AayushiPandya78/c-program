#include<stdio.h>
main()
{
	int no,op;
	printf("\n enter 1 for square :");
	printf("\n enter 2 for cube :");
	printf("\n enter your choice :");
	scanf("%d",&op);
	
switch(op)
{
	case 1:
		printf("\n enter number :");
		scanf("%d",&no);
		printf("square=%d",no*no);
		break;
	case 2:
		printf("\n enter number :");
		scanf("%d",&no);
		printf("cube=%d",no*no*no);
		break;
	default:
		printf("\n it is wrong");
}
}
