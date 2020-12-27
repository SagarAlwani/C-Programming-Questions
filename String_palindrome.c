#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 50
	void main()
	{
		char saga[SIZE];
		int i=0,j=0,n=0,k;
		printf("Enter the String Please\n");
		gets(saga);
		while(saga[n]!='\0')
		n++;
		while((i<(n/2))&&(saga[i]==saga[n-i-1]))
			i++;
		if(i==n/2)
		printf("Yes it is a Palindrome");
		else
		printf("It is Not a Palindrome");
	}
