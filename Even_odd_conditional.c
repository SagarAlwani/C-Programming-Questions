#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a;
		printf("Enter a Number\n");
		scanf("%d",&a);
		a%2==0?printf("%d is an Even Number",a):printf("%d is an Odd Number",a);
		getch();
	}	
