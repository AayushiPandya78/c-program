#include<stdio.h>
main()
{
	int a[100]={77,88,99};
	int i,n,d;
	printf("\n enter div :");
	scanf("%d",&d);
	for(i=0; i<n; i++)
	{
		if(a[i]%d==0)
		{
			printf("\n %d",a[i]);
		}
	}
}

