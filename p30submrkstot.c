#include<stdio.h>
main()
{
	int no1,no2,no3;
	printf("\n enter marks of eng:");
	scanf("%d",no1);
	printf("\n enter marks of ss:");
	scanf("%d",&no2)
	printf("\n enter marks of guj:");
	scanf("%d",&no3);
	
	printf("total=%d",no1+no2+no3);
	printf("avg=%d",(no1+no2+no3)/3);
}
