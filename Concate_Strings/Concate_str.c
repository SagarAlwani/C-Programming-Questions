#include<stdio.h>
#define SIZE 20
#include<string.h>
	void main()
	{
		char saga[SIZE],raga[SIZE];
		int i,l,m,j;
		printf("Enter First String\n");
		gets(saga);
		printf("Enter Second String\n");
		gets(raga);
		m=strlen(raga);
		l=strlen(saga);
		j=0;
		for(i=m;i<m+l;i++)
		{
			saga[i]=raga[j];
			j++;
		}
		saga[i]='\0';
		puts(saga);
	}
