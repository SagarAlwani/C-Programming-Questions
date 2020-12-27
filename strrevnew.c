#include<conio.h>
#include<stdio.h>
#include<string.h>
#define SIZE 50
	void main()
	{
		char saga[SIZE];
		int i;
		printf("Enter String Please\n");
		gets(saga);
		for(i=strlen(saga)-1;i>=0;i--)
		{
				if(saga[i]==' ')
				{
					saga[i]='\0';
						printf("%s",saga[i+1]);	
				}
				printf("%s",saga[i]);
		}
	}
