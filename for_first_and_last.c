#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,t,temp;
		printf("Enter the Number to check its First and Last digit : ");
		scanf("%d",&n);
		temp=n;
		for(n;n!=0;n)
		{
			t=n%10;
			n=n/10;
		}
		temp=temp%10;
		printf("The First digit is : %d\n",t);
		printf("The Last digit is : %d\n",temp);
		temp=temp+t;
		printf("The sum of First and Last Digit is : %d",temp);
	}
