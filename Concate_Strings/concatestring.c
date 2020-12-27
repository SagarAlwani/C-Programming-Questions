#include<conio.h>
#include<stdio.h>
	void main()
	{
		char saga[20],raga[20];
		int saga_len=0,i=0;
		printf("Enter saga String\n");
		scanf("%s",saga);
		printf("Enter raga String\n");
		scanf("%s",raga);
		while(saga[saga_len]!='\0')
		saga_len++;
		while(raga[i]!='\0')
		{
			saga[saga_len]=raga[i];
			saga_len++;
			i++;
		}
		saga[saga_len]='\0';
		printf("concatenated String is %s",saga);
	}
