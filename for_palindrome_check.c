#include<conio.h>
#include<stdio.h>
	void main()
	{
		int rev=0,n,i,temp;
		printf("Enter a Number to be Checked:\n");
		scanf("%d",&n);
		temp=n;
		while(n!=0)
		{
			i=n%10;
			rev=rev*10+i;
			n=n/10;
		}
		if(rev==temp)
		printf("Yes, %d is a Palindrome Number",rev);
		else
		printf("No, %d is not a Palindrome Number",rev);
		getch();
	}
