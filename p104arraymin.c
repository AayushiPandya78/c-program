#include<stdio.h>
main()
{
	int a[100]={90,33,56,8,23};
	int min=a[0],i,n=5;
	for(i=0; i<n; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nMIN=%d",min);
}
