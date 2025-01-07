#include<stdio.h>
#define N 3
main()
{
	int a[N][N];
	int b[N][N];
	int i,j;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("enter number a mat :");
			scanf("%d",&a[i][j]);
		}
		
		 for(j=0; j<N; j++)
		 {
		 	printf("enter number b mat :");
		 	scanf("%d ",&b[i][j]);
		 }
		}
		printf("\n");
		
		for(i=0; i<N; i++)
		{
			for(j=0; j<N; j++)
			{
				printf("%d ",a[i][j]+b[i][j]);
			}
				printf("\n");
		}
	
	}

