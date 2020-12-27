#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a;
		printf("Enter a Number\n");
		scanf("%d",&a);
		a%8==0?printf("%d is Divisible by 8",a):(a%11==0?printf("%d is Divisible by 11",a)
		:printf("%d is not divisible by 8 as well as 11",a));
		getch();
	}
