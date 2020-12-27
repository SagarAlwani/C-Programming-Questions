#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 50
	void main()
	{
		char saga[SIZE],reverse[SIZE],i,j,n,k=0;
		printf("Enter the String Please\n");
		gets(saga);
		n=0;
		while(saga[n]!='\0')
		n++;
		for(j=n-1;j>=0;j--)
		{
			reverse[i]=saga[j];
			i++;
		}
		i=0;
		while(i<n)
		{
			if(reverse[i]==saga[i])
			i++;
			else
			break;
		}
		if(i==n)
		printf("Yes It is Palindrome\n");
		else
		printf("No it is not a Palindrome");
	}
