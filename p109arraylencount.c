#include<stdio.h>
#include<string.h>
main()
{
	char name[100]={"secrets i've held in my heart are harder to hide than i thought..."};
	char ch;
	int len,i,c=0;
	len=strlen(name);
	
	for(i=0; i<len; i++)
	{
		ch=name[i];
		if(ch==' ')
		{
			c++;
		}
    }
		printf("\n count=%d",c);
	
}

