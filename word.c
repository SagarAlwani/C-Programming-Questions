#include<stdio.h>
#define SIZE 20
	void main()
	{
		char saga[SIZE],c;
		int enter=0,space=0,i=0;
		printf("Enter String Please\n");
		while(gets(saga)=='k')
		{
			for(i=0;i!='\0';i++)
			{
				if(saga[i]==32)
				enter++;
				if(saga[i]==' ')
				space++;
			}
		}
		printf("Total no of Lines : %d\n",enter+1);
		printf("Total no of words : %d\n",space+2);
		printf("Total no of Characters : %d",i);		
	}
