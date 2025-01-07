#include<stdio.h>
main()
{
	int pizza,burger,panipuri,sandwich;
	int p,b,pa,s;
	pizza=100;
	burger=50;
	panipuri=20;
	sandwich=80;
	
	printf("\n enter quantity of pizza:");
	scanf("%d",&p);
	printf("\n enter quantity of burger:");
	scanf("%d",&b);
	printf("\n enter quantity of panipuri:");
	scanf("%d",&pa);
	printf("\n enter quantity of sandwich:");
	scanf("%d",&s);
	
	printf("total bill=%d",(pizza*p)+(burger*b)+(panipuri*pa)+(sandwich*s));
}
