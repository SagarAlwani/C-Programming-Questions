#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,a,b,c;
		printf("Enter a Three digit number to be Reversed\n");
		scanf("%d",&n);
		a=n%10;
		n=n/10;
		b=n%10;
		c=n/10;
		n=a*100+b*10+c;
		printf("Reversed Number is : %d",n);
		getch();
	}
