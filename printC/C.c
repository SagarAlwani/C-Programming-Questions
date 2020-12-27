#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,j,n;
		printf("Enter the size");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n/2+1;j++)
			{
				if(i==1||i==n||j==1)
				printf("*");
				else
				printf("%c",32);
			}
			printf("\n");
		}
	}
