#include<conio.h>
#include<stdio.h>
	void main()
	{
		char ch;
		printf("Enter an Alphabet to be Checked\n");
		scanf("%c",&ch);
		if((ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')||(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
		printf("%c is a Vowel\n",ch);
		else
		printf("%c is a Consonant",ch);
		getch();
	}
