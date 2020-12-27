#include<conio.h>
#include<stdio.h>
	void main()
	{
		int sum=0,n,i;
		printf("Enter the Range:\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
		printf("Sum of the Numbers in Range 1 to %d are : %d",n,sum);
		getch();
	}
