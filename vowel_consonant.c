#include<conio.h>
#include<stdio.h>
	void main()
	{
		char ch;
		printf("Enter an Alphabet\n");
		scanf("%c",&ch);
		(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')?printf("%c is a vowel",ch):printf("%c is a Consonant",ch);
		getch();
	}
