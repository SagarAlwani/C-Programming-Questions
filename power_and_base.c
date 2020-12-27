// WACPto find power of a Number;
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a;       //POWER
		int b;       //BASE
		int i=1;
		int t=1;
		printf("Enter the Power of the Number\n");
		scanf("%d",&a);
		printf("Enter the Base of the Number\n");
		scanf("%d",&b);
		while(i<=b)
		{
			t=a*t;
			i++;
		}
		printf("The Answer is : %d",t); 
	}
