#include<conio.h>
#include<stdio.h>
	void main()
	{
		int num;
		printf("Enter a Number to be Checked\n");
		scanf("%d",&num);
		if(num%2==0)
		printf("%d is an Even Number",num);
		else
		printf("%d is an Odd Number",num);
		getch();
	}
