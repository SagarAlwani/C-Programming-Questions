#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,j,n,k=1,x=1;
		printf("Enter Range Please\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
			printf("%d",x++);
			}
			printf("\n");
		}
	
	}
	getch();