#include<stdio.h>
#define SIZE 20
	void main()
	{
		int saga[SIZE][SIZE],raga[SIZE][SIZE],sol[SIZE][SIZE];
		int r1,c1,r2,c2,i,j;
		printf("Enter no. of Rows of First Matrix\n");
		scanf("%d",&r1);
		printf("Enter no. of Columns of First Matrix\n");
		scanf("%d",&c1);
		printf("Enter no. of Rows of Second Matrix\n");
		scanf("%d",&r2);
		printf("Enter no. of Columns of Second Matrix\n");
		scanf("%d",&c2);
		if((r1==r2)&&(c1==c2))
		{
			printf("Enter Elements of First Matrix\n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					printf("saga[%d][%d] = ",i,j);
					scanf("%d",&saga[i][j]);
				}
			}
			printf("Enter Elements of Second Matrix\n");
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("raga[%d][%d] = ",i,j);
					scanf("%d",&raga[i][j]);
				}
			}
			printf("First matrix :\n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					printf("%d\t",saga[i][j]);
				}
				printf("\n");
			}
			printf("Second matrix :\n");
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("%d\t",raga[i][j]);
				}
				printf("\n");
			}
			printf("Solution Matrix(Addition) :\n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					sol[i][j]=saga[i][j]+raga[i][j];
					printf("%d\t",sol[i][j]);
				}
				printf("\n");
			}
			printf("Solution Matrix(Subtraction) :\n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					sol[i][j]=saga[i][j]-raga[i][j];
					printf("%d\t",sol[i][j]);
				}
				printf("\n");
			}
		}
		else
		printf("Computation not Possible");
	}
