#include<stdio.h>
main()
{
	int dayno;
	printf("\n enter number :");
	scanf("%d",&dayno);
	
switch(dayno)
{

    case 1:
    	printf("\n it is monday");
    	break;
    case 2:
    	printf("\n it is tuesday");
    	break;
    case 3:
    	printf("\n it is wednesday");
    	break;
    case 4:
    	printf("\n it is thursday");
    	break;
    case 5:
    	printf("\n it is friday");
    	break;
    case 6:
    	printf("\n it is saturday");
    	break;
    case 7:
    	printf("\n it is sunday");
    	break;
    default:
    	printf("\n it is no day");
}
}
