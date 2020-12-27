#include<stdio.h>
	void main()
	{
		int n,i,j;
		printf("Enter the Size\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==n||i==1||j==1||j==n||i==j||((i+j)==n+1))
				printf("*");
				else
				printf(" ");
			}
			printf("\n");
		}
	}
