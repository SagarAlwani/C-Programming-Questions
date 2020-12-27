#include<stdio.h>
#define SIZE 20
	void main()
	{
		int saga[SIZE][SIZE];
		int r,c,i,j,sum_col=0,sum_row=0;
		printf("Enter No. of Rows\n");
		scanf("%d",&r);
		printf("Enter no of Columns\n");
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
		for(i=0;i<r;i++)
		{
			sum_col=0;
			sum_row=0;
			for(j=0;j<c;j++)
			{
				sum_col=sum_col+saga[j][i];
				sum_row=sum_row+saga[i][j];
			}
			printf("\nSum of %d Row is : %d",i+1,sum_row);
			printf("\nSum of %d Column is : %d",i+1,sum_col);
		}
	}
