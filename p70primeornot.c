#include<stdio.h>
main()
{
	int i,n,y=0;
	printf("enter number :");
	scanf("%d",&n);
	for(i=2; i<n; i++)
	{
	if(n%i==0)
	{
		y=1;
		break;
	}
	}
if(y==0){
	printf("it is prime number");
}
else{
	printf("it is not a prime number");
}
}

