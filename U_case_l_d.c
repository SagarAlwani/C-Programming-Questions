#include<conio.h>
#include<stdio.h>
	void main()
	{
		char ch;
		printf("Enter a Character to be Checked\n");
		scanf("%c",&ch);
		if(ch>=65&&ch<=90)
		printf("%c is an Alphabet in Upper Case",ch);
		if(ch>=97&&ch<=122)
		printf("%c is an Alphabet in Lower Case",ch);
		if(ch>=48&&ch<=57)
		printf("%c is a Digit",ch);
		getch();
	}
