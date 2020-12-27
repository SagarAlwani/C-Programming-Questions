#include<conio.h>
#include<stdio.h>
#include<string.h>
	void main()
	{
		char a[200],rev[200];
		int i,k,value;
		printf("Enter the String is : ");
		gets(a);
		k=strlen(a);
		value=k;
		for(i=0;i<=value-1;i++)
		{
			k--;
			rev[i]=a[k];
		}
		rev[i]='\0';
		printf("The Reversed String is : ");
		puts(rev);
	}
