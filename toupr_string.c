#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 20
	void main()
	{
	char saga[SIZE],i;
	printf("Enter String\n");
	gets(saga);
	for(i=0;saga[i]!='\0';i++)
	{
		if(saga[i]>=65&&saga[i]<=90)
		saga[i]=saga[i]+32;
		else if(saga[i]>=97&&saga[i]<=122)
		saga[i]=saga[i]-32;
	}
	puts(saga);
	}
