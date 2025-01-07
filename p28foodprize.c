#include<stdio.h>
main()
{
	int no;
	char op;
	printf("\n enter s for sandwich");
	printf("\n enter p for panipuri");
	printf("\n enter m for maggie");
	printf("\n enter d for dosa");
	printf("\n enter c for chole kulcha");
	printf("\n enter your choice :");
	scanf("%c",&op);
	
if(op=='s' || op=='S'){
	printf("the prize of sandwich is 150");
}
else if(op=='p' || op=='P'){
	printf("the prize of panipuri is 50");
}
else if(op=='m'|| op=='M'){
	printf("the prize of maggie is 70");
}
else if(op=='d' || op=='D'){
	printf("the prize of dosa is 100");
}
else if(op=='c' ||op=='C'){
	printf("the prize of chole kulcha is 80");
}
else{
	printf("the option is wrong");
}
}
