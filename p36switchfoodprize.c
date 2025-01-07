#include<stdio.h>
main()
{
	int no,op,qty;
	printf("\n enter 1 for dosa");
	printf("\n enter 2 for pizza");
	printf("\n enter 3 for sandwich");
	printf("\n enter 4 for maggie");
	printf("\n enter 5 for panipuri");
	printf("\n enter your choice:");
	scanf("%d", &op);
	
switch(op)
{
	case 1:
		printf("the prize of dosa is 100 rupees");
		printf("\n enter quantity of dosa :");
		scanf("%d",&qty);
		printf("\n bill of dosa = %d",100*qty);
		break;
	case 2:
	    printf("the prize of pizza is 150 rupees");
	    printf("\n enter quantity of pizza :");
	    scanf("%d",&qty);
	    printf("\n bill of pizza = %d",150*qty);
	break;
	case 3:
		printf("the prize of sandwich is 80 rupees");
		printf("\n enter quantity of sandwich :");
		scanf("%d",&qty);
		printf("\n bill of sandwich = %d",80*qty);
		break;
    case 4:
	    printf("the prize of maggie is 70 rupees");
	    printf("\n enter quantity of maggie :");
	    scanf("%d",&qty);
	    printf("\n bill of maggie = %d",70*qty);
		break;
	case 5:
	   printf("the prize of panipuri is 60 rupees");
	   printf("\n enter quantity of panipuri :");
	   scanf("%d",&qty);
	   printf("\n bill of panipuri = %d",60*qty);
	   break;
	   default:
	   printf("the choice is wrong");		
}
	
}
