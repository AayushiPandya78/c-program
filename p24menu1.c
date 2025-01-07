#include<stdio.h>
main()
{
int op;
int no;

printf("\nEnter 1 for square");
printf("\nEnter 2 for cube");
printf("\nEnter option =>");
scanf("%d",&op);

if(op==1)
{
	printf("\nEnter no =>");
	scanf("%d",&no);
	printf("\nSquare = %d",no*no);
}
else if(op==2)
{
	printf("\nEnter no =>");
	scanf("%d",&no);
	printf("\nCube = %d",no*no*no);
}
else
{
	printf("\nWrong opt");
}

}
