#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 20
	void main()
	{
	char saga[SIZE],count=0;
	printf("Enter String\n");
	gets(saga);
	while(saga[count]!='\0')
	{
	count++;
	}
	printf("Length of String is : %d\n",count);
	printf("Size of String is : %d\n",count+1);
	getch();
	}
