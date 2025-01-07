#include<stdio.h>
main()
{
	int monthno;
	printf("\n enter number :");
	scanf("%d",&monthno);
	
	switch(monthno)
	{
		case 1:
			printf("\n it is january");
			break;
		case 2:
			printf("\n it is february");
			break;
			case 3:
				printf("\n it is march");
				break;
			case 4:
				printf("\n it is april");
				break;
			case 5:
				printf("\n it is may");
				break;
			case 6:
				printf("\n it is june");
				break;
			case 7:
				printf("\n it is july");
				break;
			case 8:
				printf("\n it is august");
				break;
			case 9:
				printf("\n it is september");
				break;
			case 10:
				printf("\n it is october");
				break;
			case 11:
				printf("\n it is november");
				break;
			case 12:
				printf("\n it is december");
				break;
			
		default:
			printf("\n it is wrong month");
			
	}
}
