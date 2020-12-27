#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,j;
		printf("Enter the size\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n/2+1;j++)
			{
				if(i==1||j==1||i==n)
				printf("#");
				else
				printf(" ");
			}
			printf("\n");
		}
		for(i=n/2+1;i<=n;i++)
		{
			for(j=n/2+1;j<=n;j++)
			{
				if(i==n/2+1||j==n/2+1||j==n)
				printf("#");
				else
				printf(" ");
			}
			printf("\n");
		}
		
	}
	
