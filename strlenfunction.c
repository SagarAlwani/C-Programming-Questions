#include<conio.h>
#include<stdio.h>
int str_len(char s_saga[]);
	void main()
	{
		char saga[20];
		int k;
		printf("Enter String Please\n");
		gets(saga);
		k=str_len(saga);
		printf("Length of String is : %d",k);
	}
	int str_len(char s_saga[])
	{
		int count=0;
		while(s_saga[count]!='\0')
		count++;
		return count;
	}
