#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,t,a;
		t=1;
		printf("Enter the Number to check Product of its Digits");
		scanf("%d",&n);
		while(n!=0)
		{
			a=n%10;
			t=t*a;
			n=n/10;
		}
		printf("The Product of Digits of This Number is:%d",t);
		getch();
	}
