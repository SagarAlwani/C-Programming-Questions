#include<stdio.h>
#define SIZE 20
	void main()
	{
		int saga[SIZE][SIZE],raga[SIZE][SIZE];
		int r,c,i,j;
		printf("Enter No of Rows\n");
		scanf("%d",&r);
		printf("Enter No of Columns\n");
		scanf("%d",&c);
		printf("Key in Matrix Elements\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("saga[%d][%d] = ",i,j);
				scanf("%d",&saga[i][j]);
			}
		}
		printf("Entered Matrix :\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",saga[i][j]);
			}
			printf("\n");
		}
		printf("Transposed Matrix :\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				raga[i][j]=saga[j][i];
				printf("%d\t",raga[i][j]);
			}
			printf("\n");
		} 
	}
