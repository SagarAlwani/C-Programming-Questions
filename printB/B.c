#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,j;
		printf("Enter the size\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n/2+2;j++)
			{
				if(n%2==0)
				{
					if(i==1||i==n||i==n/2||j==1||j==n/2+2)
					printf("*");
					else
					printf("%c",32);
				}
				else if(i==1||i==n||i==n/2+1||j==1||j==n/2+2)
				printf("*");
				else
				printf("%c",32);
			}
			printf("\n");
		}
		getch();
	}
