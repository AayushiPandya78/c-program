#include<stdio.h>
main()
{
	int a[100]={11,20,33,40,55,60,75,80,95,15};
	int i,n=10;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			printf("\n %d the number is even",a[i]);
		}
		else
		{
			printf("\n %d the number is odd",a[i]);
		}
	}
	
}
