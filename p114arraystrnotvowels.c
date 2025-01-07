#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	int i,c=0,y;
	char ch;
	printf("\n enter a name :");
	gets(name);
	y=strlen(name);
	
	for(i=0; i<y; i++)
	{
		ch=name[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			
		}
		else
		{
			printf("%c",ch);
		}
	}
	printf("count=%d",c);
}
