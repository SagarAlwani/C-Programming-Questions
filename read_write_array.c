#include<stdio.h>
	void main()
	{
		int r,c,saga[10][10],i,j;
		printf("Enter No of Rows of Matrix\n");
		scanf("%d",&r);
		printf("Enter No of columns of Matrix\n");
		scanf("%d",&c);
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("saga[%d][%d] = ",i,j);
				scanf("%d",&saga[i][j]);
			}
		}
			printf("Array printing\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",saga[i][j]);
			}
			printf("\n");
		}
	}
