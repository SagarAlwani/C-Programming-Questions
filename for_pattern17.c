#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,k,j;
		printf("Enter the Number");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=2*i-1;j++)
			{
				printf("%d",j);
			}
			printf("\n");
		}
		getch();
	}
