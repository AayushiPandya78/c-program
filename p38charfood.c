#include<stdio.h>
main()
{
	int qty;
	char op;
	printf("\n enter d for dosa");
	printf("\n enter p for pizza");
	printf("\n enter s for sandwich");
	printf("\n enter m for maggie");
	printf("\n enter pa for panipuri");
	printf("\n enter your choice:");
	scanf("%c", &op);
	
switch(op)
{
	case 'd':
	case 'D':
		printf("the prize of dosa is 100 rupees");
		printf("\n enter quantity of dosa :");
		scanf("%d",&qty);
		printf("\n bill of dosa = %d",100*qty);
		break;
	case 'p':
	case 'P':
	    printf("the prize of pizza is 150 rupees");
	    printf("\n enter quantity of pizza :");
	    scanf("%d",&qty);
	    printf("\n bill of pizza = %d",150*qty);
	break;
	case 's':
	case 'S':
		printf("the prize of sandwich is 80 rupees");
		printf("\n enter quantity of sandwich :");
		scanf("%d",&qty);
		printf("\n bill of sandwich = %d",80*qty);
		break;
    case 'm':
    case 'M':
	    printf("the prize of maggie is 70 rupees");
	    printf("\n enter quantity of maggie :");
	    scanf("%d",&qty);
	    printf("\n bill of maggie = %d",70*qty);
		break;
	case 'pa':
	case 'PA':
	   printf("the prize of panipuri is 60 rupees");
	   printf("\n enter quantity of panipuri :");
	   scanf("%d",&qty);
	   printf("\n bill of panipuri = %d",60*qty);
	   break;
	   default:
	   printf("the choice is wrong");		
}
	
}
