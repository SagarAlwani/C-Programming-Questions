//If n is a Number given by user then print the Table of n
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,k;
		printf("Enter a Number to print its Table\n");
		scanf("%d",&n);
		for(i=1;i<=10;i++)
		{
			printf("%d * %d = %d\n",n,i,n*i);
		}
		getch();
	}
