#include<stdio.h>
main()
{
	int sun,mon,tue,wed,thu,fri,sat;
	printf("\n enter temp for sun:");
	scanf("%d",&sun);
	printf("\n enter temp for mon:");
	scanf("%d",&mon);
	printf("\n enter temp for tue:");
	scanf("%d",&tue);
	printf("\n enter temp for wed:");
	scanf("%d",&wed);
	printf("\n enter temp for thu:");
	scanf("%d",&thu);
	printf("\n enter temp for fri:");
	scanf("%d",&fri);
	printf("\n enter temp for sat:");
	scanf("%d",&sat);
	

	printf("\n total temp=%d",sun+mon+tue+wed+thu+fri+sat);
	printf("\n avg temp=%d",(sun+mon+tue+wed+fri+sat/7));
}
