#include<stdio.h>
main()
{
	int i,n;
	printf("enter limit :");
	scanf("%d",&n);
	i=1;
	do
	{
     if(i%2==0)
     {
     	printf("\n%d",i);
     	
     }
     i++;
    }
    while(i<=n);
}
