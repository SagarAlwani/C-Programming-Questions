#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,j,k=1,n;
		printf("Range\n");
		scanf("%d",&n);
		for(i=n;i>=1;i++)
		{
			for(j=i;j<=n;j++)
			{
				printf("%d",k);
				k++;
			}
			printf("\n");
		}
	}
