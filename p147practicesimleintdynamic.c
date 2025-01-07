#include<stdio.h>
main()
{
	int p;
	float r,t;
	printf("\n enter principle value:");
	scanf("%d",&p);
	printf("\n enter rate value:");
	scanf("%f",&r);
	printf("\n enter time duration:");
	scanf("%f",&t);
	
	printf("simple interest=%f",(p*r*t)/100);
}
