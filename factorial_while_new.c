#include<conio.h>
#include<stdio.h>
	void main()
	{
		int t=1;
		int i,n;
		printf("Enter a Number to Check its factorial : ");
		scanf("%d!",&n);
		i=n;
		while(i!=0)
		{
			t=t*i;
			i--;
		}
		printf("The Factorial of Input Number is : %d",t);
		getch();
	}
