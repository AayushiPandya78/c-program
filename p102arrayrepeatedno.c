#include<stdio.h>
main()
{
	int a[100]={12,33,43,4,12,33,43,4,43,55,66,12,66,55,90};
	int i, n=15;
	int no, count=0;
	
	printf("enter the num you'd like to repeat :");
	scanf("%d",&no);
	
	for( i=0; i<15; i++)
	{
	  if(a[i] == no){
	  	count++;
	  }
	}
	printf("repeated %d count %d", no, count);
}
