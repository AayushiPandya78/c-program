#include<stdio.h>
main()
{
	printf("how much money do ya have dude?");
	int m;
	printf("\n dude has ");
	scanf("%d",&m);
	if(m>200)
	{
		printf("\n dude's rich! he'll order pizza");
	}
	else
	{
		printf("\n dude's broke! he'll order donut");
	}
	printf("\n");
}
