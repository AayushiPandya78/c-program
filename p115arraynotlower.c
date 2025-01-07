#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	char ch;
	int i,c=0,y;
	printf("\n enter a name :");
	gets(name);
	y=strlen(name);
	
	for(i=0; i<y; i++)
	{
		ch=name[i];
		if(islower(ch))
		{
		
		}
		else
		{
			printf("%c",ch);
			c++;
		}
	}
	printf("\n count=%d",c);
}
