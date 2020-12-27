#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,j;
		printf("Enter the size\n");
		scanf("%d",&n);
		for(i=1;i>=1;i--)
		{
			for(j=i;j<=2*n-i;j++)
			{
				if(i%2==j%2) 
				printf("*");
				else
				printf(" ");
			}
		}
		printf("\n");
	}
