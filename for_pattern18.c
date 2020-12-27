#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,k,j;
		printf("Enter the Number");
		scanf("%d",&n);
		k=-5;
		for(i=n;i>=1,i--;k++)
		{
			for(j=i;j<=n;j++)
			{
				printf("%d",k);
			}
			printf("\n");
		}
		getch();
	}
