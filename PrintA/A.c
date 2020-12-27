#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,j,k,n;
		printf("Enter the size");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(n%2==0)
				{
					if(i==n/2||j==1||j==n||i==1||i==n)
					printf("*");
					else
					printf("%c",32);
				}
				else if(i==n/2+1||j==1||j==n||i==1||i==n)
				printf("*");
				else
				printf("%c",32);
			}
			printf("\n");
		}
	}
