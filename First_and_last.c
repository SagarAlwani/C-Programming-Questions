#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,temp,a;
		printf("Enter the Number to Check its First & Last digits");
		scanf("%d",&n);
		temp=n;
		while(n!=0)
		{
			a=n%10;
			n=n/10;
		}
		temp=temp%10;
		temp=temp+a;
		printf("The Sum of Last number and the First Number is:%d",temp);
		getch();
	}
