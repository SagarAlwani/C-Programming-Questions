#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,rev=0,t,temp;
		printf("Enter the number to check its Reverse of Digits");
		scanf("%d",&n);
		temp=n;
		for(n;n!=0;n)
		{
			t=n%10;
			rev =rev*10+t;
			n=n/10;
		}
		if(rev==temp)
		printf("%d is a Pailindrome",temp);
		else
		printf("%d is not a Pailindrome",temp);
	}
