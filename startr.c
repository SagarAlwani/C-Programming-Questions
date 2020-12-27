#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,j;
		printf("Enter Size please..\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n+i-1;j++)
			{
				if(i+j<=n)
				printf(" ");
				else
				printf("*");
			}
			printf("\n");
		}
	}
