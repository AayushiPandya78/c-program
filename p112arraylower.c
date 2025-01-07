#include<stdio.h>
#include<string.h>
main()
{
	char name[100]={"we're only getting older and i've been thinking about it lately.."};
	char ch;
	int len,i,c=0;
	len=strlen(name);
	
	for(i=0; i<len; i++)
	{
		ch=name[i];
		if(islower(ch))
		{
			printf("%c",ch);
			c++;
		}
	}
	printf("\n lower=%d",c);
	
}
