/*Copy one String into another String*/
#include<conio.h>
#include<stdio.h>
int str_cpy(char s_saga[],char s_raga[]);
	void main()
	{
		char saga[20],raga[20];
		int k;
		printf("Enter String Please\n");
		gets(saga);
		str_cpy(raga,saga);
		puts(raga);
	}
	int str_cpy(char s_saga[],char s_raga[])
	{
		int i,c;
		while((c=getchar())!='\0')
			s_raga[i]=s_saga[i];
		s_raga[i]='\0';
	}
