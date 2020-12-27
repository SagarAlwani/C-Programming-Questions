#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,t=0;
		printf("Enter a Number to Count the Digits");
		scanf("%d",&n);
		while(n!=0)
		{
			n=n/10;
			t=t+1;
		}
		printf("Total no of digits :%d",t);
		getch();
	}
