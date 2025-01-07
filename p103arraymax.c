#include<stdio.h>
main()
{
	int a[100]={11,5,20,34,22,21,30,43,21,90};
	int m=a[0],i,n=10;
	for(i=0; i<n; i++)
	{
		if(m<a[i])
		{
			m=a[i];
		}
	}
	printf("\nMAX =%d",m);
}
