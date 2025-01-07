#include<stdio.h>
#define N 3
main()
{
	int a[N][N];
	int b[N][N];
	int product[N][N];
	int i,j,k,r,c,s;
	
	printf("enter number of row:");
	scanf("%d",&r);
	printf("enter number of columns:");
	scanf("%d",&c);
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("enter number a=");
			scanf("%d",&a[i][j]);
		}
		for(j=0; j<N; j++)
		{
			printf("enter number b=");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			for(k=0; k<r; k++)
			{
				s+=a[i][k]*b[k][j];
			}
			product[i][j]=s;
			s=0;
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",product[i][j]);
		}
		printf("\n");
	}
}
