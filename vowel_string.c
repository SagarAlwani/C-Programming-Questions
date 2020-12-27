/*WACP to Check how many Vowels are there in a String*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
	void main()
	{
		char k[10];
		int i,count=0,j;
		printf("Enter The String");
		gets(k);
		j=strlen(k);
		for(i=0;i<=j-1;i++)
		{
			if(k[i]=='a'||k[i]=='A'||k[i]=='e'||k[i]=='E'||k[i]=='i'||k[i]=='I'||k[i]=='o'||k[i]=='O'||k[i]=='u'||k[i]=='U')
			{
				count++;
			}
		}
		pritnf("The No of Vowels In the String Are : %d",count);
		getch();
	}
