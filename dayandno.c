#include<stdio.h>
main()
{
	int dayno;
	printf("enter day:");
	scanf("%d",&dayno);
	
if(dayno==1)
	{
	printf("it is monday");
		
	}
else if(dayno==2){
	printf("it is tuesday");
}
else if(dayno==3){
	printf("it is wednesday");
}
else if(dayno==4){
	printf("it is thursday");
}
else if(dayno==5){
	printf("it is friday");
}
else if(dayno==6){
	printf("it is saturday");
}
else if(dayno==7){
	printf("it is sunday");
}
else{
	printf("it is no day");
}
}
