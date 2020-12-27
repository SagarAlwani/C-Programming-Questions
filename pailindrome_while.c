#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,a,rev,temp;
		printf("Enter the Number to check the Sum of its digits");
		scanf("%d",&n);
		temp=n;
		while(n!=0)
		{
			a=n%10;
			rev=rev*10+a;
			n=n/10;
		}
		printf("The rev of Digits is =%d\n",rev);
		if(rev==temp)
		printf("Yes it is Pailindrome");
		else
		printf("It is not a Pailindrome");
	}
