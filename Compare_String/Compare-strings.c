#include<stdio.h>
#include<string.h>
#define SIZE 40
	void main()
	{
		char saga[SIZE],raga[SIZE];
		int saga_len=0,raga_len=0,i,k=0;
		printf("Enter First String\n");
		gets(saga);
		printf("Enter Second String\n");
		gets(raga);
		for(i=0;saga[i]!='\0';i++)
		{
			saga_len++;
		}
		for(i=0;raga[i]!='\0';i++)
		{
			raga_len++;
		}
		if(saga_len==raga_len)
		{
			for(i=0;i<saga_len;i++)
			{
				if(saga[i]==raga[i])
				k++;
			}
			if(k==saga_len)
			printf("Strings are Equal\n");
			else
			printf("Strings are not Equal");
		}
		else
		printf("Strings are not Equal");
	}
