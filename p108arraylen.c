#include<stdio.h>
#include<string.h>
main()
{
	char name[100]={"if the world was ending i wanna be next to you"};
	char ch;
	int len,i;
	len=strlen(name);
	
	for(i=0; i<len; i++)
	{
		ch=name[i];
		printf("\n%c",ch);
	}
}
