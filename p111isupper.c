#include<stdio.h>
#include<string.h>
main()
{
	char name[100]={"Khadak Singh Ke Khadak Ne Se Khadakti Hai Khidkiya"};
	char ch;
	int len,i,c=0;
	len=strlen(name);
	
	for(i=0; i<len; i++)
	{
		ch=name[i];
		if(isupper(ch))
		{
			c++;
		}
	}
	printf("\n upper =%d",c);
}
