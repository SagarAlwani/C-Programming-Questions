#include<conio.h>
#include<stdio.h>
	void main()
	{
		char a[200];
		int i,count=0;
		printf("Enter the String : ");
		gets(a);
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='O'||a[i]=='o'||a[i]=='I'||a[i]=='i'||a[i]=='U'||a[i]=='u')
			count++;
		}
		printf("The Number of Vowels in the String are : %d",count);
		getch();
	}
