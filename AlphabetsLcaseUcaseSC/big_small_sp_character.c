#include<conio.h>
#include<stdio.h>
	int main()
	{
		char n;
		printf("Enter the character");
		scanf("%c",&n);
		{
			if(n>=65&&n<=90)
			printf("It is a Capital Letter:%c",n);
		    else if(n>=97&&n<=122)
			printf("It is a Small Letter:%c",n);
			else if(n>=47&&n<=58)
			printf("It is a Digit:%c",n);
			else
			printf("It is a Special character:%c",n);
		}
		getch();
	}

