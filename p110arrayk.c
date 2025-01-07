#include<stdio.h>
#include<string.h>
main()
{
	char name[100]={"Khadak singh ke Khadak ne se Khadakti hai Khidkiya"};
	char ch;
	int len,i,c=0;
	len=strlen(name);
	
	for(i=0; i<len; i++)
	{
		ch=name[i];
		if(ch=='k' || ch=='K')
		{
			c++;
		}
	}
	printf("\n K =%d",c);
}
