//C program to check Entered Character is Vowel or a Consonant using Switch Case :
#include<conio.h>
#include<stdio.h>
	void main()
	{
		char choice;
		printf("Enter a Chararacter\n");
		scanf("%c",&choice);
		switch(choice)
		{
			case 'A':
					printf("%c is a Vowel",choice);
					break;
			case 'E':
					printf("%c is a Vowel",choice);
					break;
			case 'I':
					printf("%c is a Vowel",choice);
					break;
			case 'O':
					printf("%c is a Vowel",choice);
					break;
			case 'U':
					printf("%c is a Vowel",choice);
					break;
			case 'a':
					printf("%c is a Vowel",choice);
					break;
			case 'e':
					printf("%c is a Vowel",choice);
					break;
			case 'i':
					printf("%c is a Vowel",choice);
					break;
			case 'o':
					printf("%c is a Vowel",choice);
					break;
			case 'u':
					printf("%c is a Vowel",choice);
					break;
			default: 
					printf("%c is a Consonant",choice);			
		}
		getch();
	}

