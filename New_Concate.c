#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,j;
		char a[100],b[100];
		printf("Enter the First String");
		gets(a);
		printf("Enter the Second String");
		gets(b);
		for(i=0;a[i]!=0;i++);
		for(j=0;b[j]!=0;j++)
		{
			a[i]=b[j];
			i++;
		}
		a[i]='\0';
		printf("The Concatenated String is : ");
		puts(a);
	}
