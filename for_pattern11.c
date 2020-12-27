#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,j;
		printf("Enter the Number");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				if(j==1||i==n||i==j)
				printf("1");
				else
				printf("0");
			}
			printf("\n");
		}
		getch(); 
	}
