#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,k,j;
		printf("Enter the Number");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i%2==0)
				printf("0");
				else
				printf("1");
			}
			printf("\n");
		}
		getch();
	}
