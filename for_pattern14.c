#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,k,j;
		printf("Enter the Number");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=2*i-1;j<=2*n-1;j=j+2)
			{
				printf("%d",j);
			}
			printf("\n");
		}
		getch();
	}
