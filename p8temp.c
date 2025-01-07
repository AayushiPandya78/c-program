#include<stdio.h>
main()
{
	int mon,tue,wed,thu,fri;
	printf("\n enter temp for mon =>");
	scanf("%d",&mon);
	printf("\n enter temp for tue =>");
	scanf("%d",&tue);
	printf("\n enter temp for wed =>");
	scanf("%d",&wed);
	printf("\n enter temp for thu =>");
	scanf("%d",&thu);
	printf("\n enter temp for fri =>");
	scanf("%d",&fri);
	
	printf("\n total=%d",mon+tue+wed+thu+fri);
	printf("\n avg=%d",(mon+tue+wed+thu+fri)/5);
}
