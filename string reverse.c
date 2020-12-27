#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i;
		char saga[20],ch;
		printf("Enter String Please\n");
		scanf("%s",saga);
		n=0;
		while(saga[n]!='\0')
		n++;
		for(i=0;i<n/2;i++)
		{
			ch=saga[n-i-1];
			saga[n-i-1]=saga[i];
			saga[i]=ch;
		}
		gets(saga);
		
		
	}
