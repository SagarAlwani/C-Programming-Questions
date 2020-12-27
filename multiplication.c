#include<stdio.h>
	void main()
	{
		int r1,c1,r2,c2,a[10][10],i,j,k,c[10][10],b[10][10];
		printf("Enter No of Rows of 1st Matrix\n");
		scanf("%d",&r1);
		printf("Enter No of columns of 1stMatrix\n");
		scanf("%d",&c1);
		Printf("Enter Elements of First Matrix\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter No of Rows of 2nd Matrix\n");
		scanf("%d",&r2);
		printf("Enter No of columns of 2nd Matrix\n");
		scanf("%d",&c2);
		Printf("Enter Elements of Second Matrix\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("b[%d][%d]=",i,j);
				scanf("%d",&b[i][j]);
			}
		}
			if(c1==r2)
		{
			
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("A[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter No of Rows of 2nd Matrix\n");
		scanf("%d",&r2);
		printf("Enter No of columns of 2nd Matrix\n");
		scanf("%d",&c2);
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<c1;k++)
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("Computaion not Possible\n");
	}
	
