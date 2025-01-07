#include<stdio.h>
main()
{
	int no1,no2,no3,total;
	printf("enter marks of eng :");
	scanf("%d",&no1);
	printf("\n enter marks of ss :");
	scanf("%d",&no2);
	printf("\n enter marks of guj :");
	scanf("%d",&no3);
	total=no1+no2+no3;
	printf("total=%d",total);
	
	if(total>0 && total<=50)
	{
		printf("the grade is 'C'");
	}
	else if(total>50 && total<=100){
		printf("the grade is 'B'");
	}
	else if(total>100 && total<=350){
		printf(" the grade is 'A'");
	}
	else{
		printf("there is a limit");
	}
	

}
