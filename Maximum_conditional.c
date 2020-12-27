#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b;
		printf("Enter First Number\n");
		scanf("%d",&a);
		printf("Enter Second Number\n");
		scanf("%d",&b);
		a>b?printf("%d is Maximum",a):printf("%d is Maximum",b);
		getch();
	}
