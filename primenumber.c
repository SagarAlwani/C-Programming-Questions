#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,n,i=2,t=0;
		printf("Enter the Number to check that it is prime or not");
		scanf("%d",&n);
		while(i>=n-1)
		{
			a=n%i;
			t=t+a;
			i++;
		}
		if(t!=0)
		printf("It is not a Prime Number");
		else
		printf("It is a Prime Number");
		getch();
	}
