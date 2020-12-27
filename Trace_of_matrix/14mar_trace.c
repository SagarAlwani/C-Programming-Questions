#include<conio.h>
#include<stdio.h>
#define SIZE 10
	void main()
	{
		int saga[SIZE][SIZE],row,col,i,j,trace=0;
		printf("Enter no of Rows\n");
		scanf("%d",&row);
		printf("Enter no of Columns\n");
		scanf("%d",&col);
		printf("Enter Array Elements\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("saga[%d][%d] =",i,j);
				scanf("%d",&saga[i][j]);
			}
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",saga[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				if(i==j)
				trace=trace+saga[i][j];
			}
		}
		printf("Trace of this Matrix is : %d",trace);
		
	}
