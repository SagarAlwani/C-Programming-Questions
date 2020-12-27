/*WACP To Check no Alphabets,digit,special Characters are there in a String*/
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int digit=0,alpha=0,sp_char=0,i;
		char a[100];
		printf("Enter the String\n");
		gets(a);
		for(i=0;a[i]!='\0';i++)
		{
			if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
			alpha++;
			else if(a[i]>=48&&a[i]<=57)
			digit++;
			else
			sp_char++;
		}
		printf("Total No. of Alphabets in the String are : %d",alpha);
		printf("\nTotal No. of Digits in the String are : %d",digit);
		printf("\nTotal No. of Special Characters in the String are : %d",sp_char);
		getch();
		
	}
