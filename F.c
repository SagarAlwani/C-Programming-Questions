#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,j;
		printf("Enter the size\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==1||i==n/2+1||j==1)
				printf("*");
				else
				printf("%c",32);
			}
			printf("\n");
		}
		getch();
	}
