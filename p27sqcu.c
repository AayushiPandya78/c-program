#include<stdio.h>
main()
{
int no;
char op;
printf("\n enter s for square");
printf("\n enter c for cube");
printf("\n enter number :");
scanf("%c",&op);
if(op=='s' || op=='S'){
	printf("enter number=");
	scanf("%d",&no);
	printf("square=%d",no*no);
}
else if(op=='c'|| op=='C'){
	printf("enter number=");
	scanf("%d",&no);
	printf("cube=%d",no*no*no);
}
else{
	printf("the option is wrong");
}
}
