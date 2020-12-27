#include<conio.h>
#include<stdio.h>
#define SIZE 50
	void main()
	{
		int saga[SIZE][SIZE],jaga[SIZE][SIZE],raga[SIZE][SIZE];
		int r1,c1,r2,c2,i,j,k;
		printf("Enter no. of Rows of First Matrix\n");
		scanf("%d",&r1);
		printf("Enter no. of Columns of First Matrix\n");
		scanf("%d",&c1);
		printf("Enter no. of Rows of Second Matrix\n");
		scanf("%d",&r2);
		printf("Enter no. of Columns of Second Matrix\n");
		scanf("%d",&c2);
		if(c1==r2)
		{
			printf("Enter Elements of First Matrix of %dX%d Order\n",r1,c1);
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					printf("saga[%d][%d] = ",i,j);
					scanf("%d",&saga[i][j]);
				}
			}
			printf("Enter Elements of Second Matrix of %dX%d Order\n",r2,c2);
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("jaga[%d][%d] = ",i,j);
					scanf("%d",&jaga[i][j]);
				}
			}
			printf("First Matrix\n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					printf("%d\t",saga[i][j]);
				}
				printf("\n");
			}
			printf("Second Matrix\n");
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("%d\t",jaga[i][j]);
				}
				printf("\n");
			}
			printf("Multiplied Matrix\n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c2;j++)
				{
					raga[i][j]=0;
					for(k=0;k<c1;k++)
					{
						raga[i][j]=raga[i][j]+saga[j][k]*jaga[k][j];
					}
					printf("%d\t",raga[i][j]);
				}
				printf("\n");
			}
		}
		else
		printf("No Computation Possible With This Order\n");
	}
