#include<stdio.h>
main()
{
	int sun,mon,tue,wed,thu,fri,sat;
	sun=10;
	mon=15;
	tue=20;
	wed=25;
	thu=30;
	fri=35;
	sat=40;
	printf("\n ~temperature record~");
	printf("\n total temp=%d",sun+mon+tue+wed+thu+fri+sat);
	printf("\n avg temp=%d",(sun+mon+tue+wed+fri+sat/7));
}
