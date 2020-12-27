#include<conio.h>
#include<stdio.h>
	void main()
	{
		int sum=0,n,i;
		printf("Enter a Number to Sum its Digits:\n");
		scanf("%d",&n);
		while(n!=0)
		{
			i=n%10;
			sum=sum+i;
			n=n/10;
		}
		printf("Sum of Digits of Number is : %d",sum);
		getch();
	}
