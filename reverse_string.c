#include<stdio.h>
#include<conio.h>
#include<string.h>
# define SIZE 50
	void main()
	{
		char saga[SIZE],reverse[SIZE];
		int i,j,n;
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
		reverse[i]='\0';
		puts("Original String is : ");
		puts(saga);
		puts("Reversed String is : ");
		puts(reverse);
	}
