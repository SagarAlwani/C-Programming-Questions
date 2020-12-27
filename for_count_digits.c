#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,n;
		printf("Enter the number to count Number of Digits");
		scanf("%d",&n);
		for(i=0;n!=0;i++)
		{
			n=n/10;
		}
		printf("%d",i);
	}
