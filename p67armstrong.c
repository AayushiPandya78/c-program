#include<stdio.h>
main()
{
	int no;
	int rev=0,y,z;
	printf("enter number :");
	scanf("%d",&no);
	z=no;
	while(no>0)
	{
	y=no%10;
	rev=rev+y*y*y;
	no=no/10;
    }
	printf("\n rev=%d no = %d",rev,z);
	if(rev==z)
	{
		printf("\nArm Strong");
	}
	else
	{
		printf("\nNot Armstrong");
	}
}

