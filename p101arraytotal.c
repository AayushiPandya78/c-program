#include<stdio.h>
main()
{
	int a[10]={23,44,69,78};
	int b[10]={11,33,56,89};
	int i,n=4;
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]+b[i]);
	}
}
