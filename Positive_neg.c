#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a;
		printf("Enter a Number\n");
		scanf("%d",&a);
		a>0?printf("%d is a Positive Number",a):printf("%d is a Negative Number",a);
		getch();
	}	
