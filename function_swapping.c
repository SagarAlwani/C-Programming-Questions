#include<conio.h>
#include<stdio.h>
	void swap (int,int);
	void main()
	{
		int a,b;
		printf("Enter the First Number\n");
		scanf("%d",&a);
		printf("Enter the Second Number\n");
		scanf("%d",&b);
		swap(a,b);
		printf("The Swap of a & b is %d & %d\n",a,b);
	}
	void swap(int a,int b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
		printf("After Swap a & b is %d & %d\n",a,b);
	}
