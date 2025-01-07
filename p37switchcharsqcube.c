#include<stdio.h>
main()
{
	int no;
	char op;
	printf("\n enter s for square :");
	printf("\n enter c for cube :");
	printf("\n enter your choice :");
	scanf("%c",&op);
	
switch(op)
{
	case 's':
	case 'S':
		printf("\n enter number :");
		scanf("%d",&no);
		printf("square=%d",no*no);
		break;
	case 'c':
	case 'C':
		printf("\n enter number :");
		scanf("%d",&no);
		printf("cube=%d",no*no*no);
		break;
	default:
		printf("\n it is wrong");
}
}
