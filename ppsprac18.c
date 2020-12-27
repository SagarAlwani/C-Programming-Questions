#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,j,n,k;
		printf("Enter Range\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=0;j<=n-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
		}
		
	}
