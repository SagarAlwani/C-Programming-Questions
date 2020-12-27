#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i;
		printf("Enter the Number to be Checked : ");
		scanf("%d",&n);
		for(i=2;i<=n-1;i++)
		if(n%i==0)
		break;
		if(i==n)
		printf("%d is a Prime Number",n);
		else
		printf("%d is not a Prime Number",n);
	}
