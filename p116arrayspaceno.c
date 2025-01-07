#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	char ch;
	int y,i,c=0;
	printf("\n enter a name :");
	gets(name);
	y=strlen(name);
	
	for(i=0; i<y; i++)
	{
		ch=name[i];
		if(ch==' ')
		{
			printf("7",ch);
			c++;
		}
	}
	printf("\n count=%d",c);
	
}
