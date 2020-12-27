#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,j,k;
		printf("Enter the Number");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(k=1,j=1;j<=i;j++)
			{
				printf("%d",k);
				k=!k;
			}
			printf("\n");
		} 
	}
