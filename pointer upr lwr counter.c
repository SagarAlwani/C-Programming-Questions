#include<stdio.h>
#include<conio.h>
	void main()
	{
		char saga[100], *ptr;
		int upr=0,lwr=0;
		printf("Enter the String\n");
		gets(saga);
		ptr=saga;
		while(*ptr!='\0')
		{
			if(*ptr>=97&&*ptr<=122)
			lwr++;
			else if(*ptr>=65&&*ptr<=90)
			upr++;
			ptr++;
		}
		printf("No. of Upper Case Letters : %d\n",upr);
		printf("No. of Lower Case Letters : %d",lwr);
	}
