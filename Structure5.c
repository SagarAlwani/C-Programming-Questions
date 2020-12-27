#include<stdio.h>
#include<conio.h>
void swap1(int a,int b);
	void main()
	{
		struct addition
		{
			int num1;
			int num2;
		};
		struct addition saga;
		printf("Enter 1st Number\n");l
		scanf("%d",&(saga.num1));
		printf("Enter 2nd Number\n");
		scanf("%d",&saga.num2);
		swap1(saga.num1,saga.num2);
		printf("Value of First No - %d",saga.num1);
		printf("Value of Second No - %d",saga.num2);
	}
	void swap1(int a,int b)
	{
		a=a^b;
		b=a^b;
		a=a^b;
	
	}
