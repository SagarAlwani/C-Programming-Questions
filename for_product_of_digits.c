#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,t,temp=1;
		printf("Enter the Number to check Product of its Digits : ");
		scanf("%d",&n);
		for(n;n!=0;n)
		{
			t=n%10;
			temp=temp*t;
			n=n/10;
		}
		printf("The Product of its Digits is : %d",temp);
		getch();
	}
