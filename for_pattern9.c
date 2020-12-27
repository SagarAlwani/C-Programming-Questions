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
				if(j%2==0)
				printf("0");
				else
				printf("1");
			}
			printf("\n");
		}
	}
