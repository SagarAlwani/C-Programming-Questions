#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,j,k;
		printf("Enter the Number");
		scanf("%d",&n);
		k=n;
		for(i=1;i<=n;i++,k--)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",k);
			}
			printf("\n");
		}
	}
