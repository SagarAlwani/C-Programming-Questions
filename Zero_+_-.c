#include<conio.h>
#include<stdio.h>
	void main()
	{
		int num;
		printf("Enter a Number to be Checked\n");
		scanf("%d",&num);
		if(num>0)
		printf("%d is greater than Zero",num);
		if(num<0)
		printf("%d is less than Zero",num);
		if(num==0)
		printf("Entered number is %d(Zero)",num);
		getch();
	}
