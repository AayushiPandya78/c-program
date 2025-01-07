#include<stdio.h>
main()
{
	int a[100]={22,-2,35,79,-46,-90,95,-88,50,-69};
	int i,n=10,cp=0,cn=0;
	for(i=0; i<n; i++)
	{
		if(a[i]>=0)
		{
			printf("\n %d positive",a[i]);
			cp++;
		}
		else
		{
			printf("\n %d negative",a[i]);
			cn++;
		}
	}
	printf("\n total positive num are =%d",cp);
	printf("\n total negative num are =%d",cn);
	
}
