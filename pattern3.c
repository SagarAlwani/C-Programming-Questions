#include<stdio.h>
	void main()
	{
		int i,n,j;
		printf("Enter the Size\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if((i==j||(j+i==(n+1))))
				printf("*");
				else
				printf(" ");
			}
			printf("\n");
		}	
	}
