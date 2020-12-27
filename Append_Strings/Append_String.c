#include<conio.h>
#include<stdio.h>
#include<string.h>
	void main()
	{
		char a[200],b[200];
		int i,j ;
		printf("Enter the First String");
		gets(a);
		printf("Enter The Second String");
		gets(b);
		for(i=0;b[i]!='\0';i++)
		{
		}
		for(j=0;a[j]!='\0';j++)
		{
			b[i]=a[j];
			i++;
		}
		b[i]='\0';
		printf("After Append the Final String is : ");
		puts(b);
	}
