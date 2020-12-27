/*To check whether a given character is alphabet digit or sp_symbol*/
#include<conio.h>
#include<stdio.h>
	void main()
	{
		char ch;
		printf("Enter a Character \n");
		scanf("%c",&ch);
		if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
		printf("Alphabet");
		else if(ch>=48&&ch<=57)
		printf("Digit");
		else
		printf("Special Symbol");
	}
