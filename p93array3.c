#include<stdio.h>
main()
{
	int a[100]={11,5,99,33,21,20,2,31,9,10};
	int i,n=10;
	for(i=0; i<n; i++)
	{
	if(a[i]%11==0)
	{
		printf(" %d",a[i]);
	}
}
}
