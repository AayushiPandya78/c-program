#include<stdio.h>
main()
{
	int no;
	int sum=0,y,z;
	printf("enter number :");
	scanf("%d",&no);
	z=no;
	while(no>0)
	{
	y=no%10;
	sum=sum+y;
	no=no/10;
    }
	printf("\n Sum = %d no = %d",rev,z);
}

