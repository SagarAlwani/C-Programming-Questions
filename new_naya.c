#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[3][3],b[3][3],c[3][3],n,i,j,k,r1,c1,r2,c2;
		printf("Enter the Rows of First Matrices\n");
		scanf("%d",&r1);
		printf("Enter the Rows of First Matrices\n");
		scanf("%d",&c1);
		printf("Enter the Elements of First matrices\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("a[%d][%d]=",a[i+1][j+1]);
				scanf("%d",&a[i][j]);
			}
		}	
		printf("Enter the Rows of Second Matrices\n");
		scanf("%d",&r2);
		printf("Enter the Rows of Second Matrices\n");
		scanf("%d",&c2);
		printf("Enter the Elements of Second matrices\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("b[%d][%d]=",b[i+1][j+1]);
				scanf("%d",&b[i][j]);
			}
		}
		if(c1==r2)
		{
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c2;j++)
				{
					c[i][j]=0;
					for(k=0;k<=r1;k++)
					{
						c[i][k]=a[i][j]*b[j][k]+c[i][k];
					}
				}
			}
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("\t%d",c[i][j]);
				
			}
			printf("\n");
		}
	}
		else
		printf("Matrices Case Not Possible");
	}
