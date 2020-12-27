#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 20
	void main()
	{
	char saga[SIZE];
	int i,vow=0,con=0,space=0,digit=0;
	printf("Enter String\n");
	gets(saga);
	for(i=0;saga[i]!='\0';i++)
	{
		if(saga[i]=='a'||saga[i]=='e'||saga[i]=='i'||saga[i]=='o'||saga[i]=='u'||saga[i]=='A'||saga[i]=='E'||saga[i]=='I'||saga[i]=='O'||saga[i]=='U')
		vow++;
		else if((saga[i]>=65&&saga[i]<=90)||(saga[i]>=97&&saga[i]<=122))
		con++;
		else if(saga[i]==32||saga[i]=='\t')
		space++;
		else if(saga[i]>=47&&saga[i]<=58)
		digit++;
	}
	printf("Total no of Vowels in the String are : %d\n",vow);
	printf("Total no of Consonants in the String are : %d\n",con);
	printf("Total no of White Spaces in the String are : %d\n",space);
	printf("Total no of Digits in the String are : %d\n",digit);	
	}
