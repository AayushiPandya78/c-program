#include<stdio.h>
main()
{
	int year;
	printf("enter year:");
	scanf("%d",&year);
	
if(year%4==0){
	printf("it is a leap year");
}
else{
	printf("it is normal year");
}
}
