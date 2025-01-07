#include<stdio.h>
main()
{
	int a[100]={11,20,33,40,55,60,75,80,95,15};
	int i,n=10,ce=0,co=0;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			printf("\n %d the number is even",a[i]);
			ce++;
		}
		else
		{
			printf("\n %d the number is odd",a[i]);
			co++;
		}
	}
	printf("\n total even=%d",ce);
	printf("\n total odd=%d",co);
	
}
