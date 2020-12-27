#include<conio.h>
#include<stdio.h>
	void main()
	{
		char ch;
		printf("Enter any Alphabet\n");
		scanf("%c",&ch);
		(ch>=65&&ch<=90)||(ch>=97&&ch<=122)?printf("%c is an Alphabet",ch)
		:printf("%c is not an Alphabet",ch);
		getch();
	}
