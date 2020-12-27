#include<stdio.h>
#define SIZE 20
	void main()
	{
		int i,j,r,c;
		int saga[SIZE][SIZE];
		printf("Enter no. of Rows\n");
		scanf("%d",&r);
		printf("Enter no. of Columns\n");
		scanf("%d",&c);
		if(r==c)
		{
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
		for(i=0;i<r;i++)
		{
			for(j=0;j<=i-1;j++)
			{
				saga[i][j]=0;
			}
			printf("\n");
		}
		printf("Upper Triangular Matrix :\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",saga[i][j]);
			}
			printf("\n");	
		}
		}
		else
		printf("Matrix can be changed in upper Triangular Matrix Only if it is a Square Matrix\n");
	}

