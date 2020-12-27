#include<conio.h>
#include<stdio.h>
void swap(int a,int b);
	void main()
	{
		int num1,num2;
		printf("Enter the First Number(num1)\n");
		scanf("%d",&num1);
		printf("Enter the Second Number(num2)\n");
		scanf("%d",&num2);
		swap(num1,num2);
	}
	void swap(int a,int b)
	{
		a=a^b;
		b=a^b;
		a=a^b;
		printf("num1 = %d\n",a);
		printf("num2 = %d",b);
	}
