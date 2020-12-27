#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 20
	void main()
	{
	char saga1[SIZE],saga2[SIZE],i;
	printf("Enter String\n");
	gets(saga1);
	for(i=0;saga1[i]!='\0';i++)
	{
		saga2[i]=saga1[i];
	}saga2[i]='\0';
	printf("After Copy String is\n");
	puts(saga2);
	getch();
	}
