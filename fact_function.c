#include<conio.h>
#include<stdio.h>
int sum(int a,int b);
	void main()
	{
		int num1,num2,total=0;
		printf("Enter First Number\n");
		scanf("%d",&num1);
		printf("Enter Second Number\n");
		scanf("%d",&num2);
		total=sum(num1,num2);
		printf("Sum of two Numbers is : %d",total);
	}
	int sum(int a,int b)
	{
		int result;
		result=a+b;
		return result;
	}
	
	
