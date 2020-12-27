#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,j;
		printf("Enter the Number");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=n;j>=i;j--)
			{
				printf("%d",j);
			}
			printf("\n");
		}
	}
