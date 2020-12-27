//Palindrome
#include<conio.h>                     //
#include<stdio.h>
	int main()
	{
		int a,b,c,n,ans,temp;
		printf("Enter the number");
		scanf("%d",&n);
		temp = n;
		a=n%10;
		n=n/10;
		b=n%10;
		c=n/10;
		ans=a*100+b*10+c*1;
		
			if(ans==temp)
			printf("Yes the Entered Number %d is Palindrome",temp);
			else
			printf("No the Entered Number %d is not a Palindrome",temp);
		
	}
