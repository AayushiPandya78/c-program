#include<stdio.h>
struct book
{
	int bid;
	char bname[100];
	int charges;
};
main()
{
	struct book b1,b2,b3;
	printf("\n enter bid :");
	scanf("%d",&b1.bid);
	fflush(stdin);
	printf("\n enter bname :");
	gets(b1.bname);
	printf("\n enter charges :");
	scanf("%d",&b1.charges);
	
	printf("\n enter bid :");
	scanf("%d",&b2.bid);
	fflush(stdin);
	printf("\n enter bname :");
	gets(b2.bname);
	printf("\n enter charges :");
	scanf("%d",&b2.charges);
	
	printf("\n enter bid :");
	scanf("%d",&b3.bid);
	fflush(stdin);
	printf("\n enter bname :");
	gets(b3.bname);
	printf("\n enter charges :");
	scanf("%d",&b3.charges);
	
      printf("\n b1 bid=%d bname=%s charges=%d",b1.bid,b1.bname,b1.charges);
	printf("\n  b2 bid=%d bname=%s charges=%d",b2.bid,b2.bname,b2.charges);
	printf("\n  b3 bid=%d ename=%s charges=%d",b3.bid,b3.bname,b3.charges);
}

