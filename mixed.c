#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 20
	void main()
	{
		char saga[SIZE],raga[SIZE],temp[SIZE];
		int k;
		printf("Enter First String(saga) Please\n");
		gets(saga);
		printf("Enter Second String(raga) Please\n");
		gets(raga);
		// Let's Compute Length of these Strings using strlen().
		printf("Length of saga is : %d\n",strlen(saga));
		printf("Length of raga is : %d\n",strlen(raga));
		// Compare Strings using strcmp().
		k=strcmp(saga,raga);
		if(k==0)
			printf("Strings are Equal\n");
		else
			printf("Strings are not Equal\n");
		// Copy saga/raga in a temporary string(temp) using strcpy().
		strcpy(temp,saga);
		printf("After Copy String is : \n");
		puts(temp);
		// Reverse String temp using strrev().
		strrev(temp);
		printf("After Reverse String is : \n");
		puts(temp);
		 // Concatenation of two Strings using strcat().
		 strcat(saga,raga);
		 printf("After Concatenation String saga with raga\n");
		 puts(saga);
		 // Changing String saga in Upper Case using strupr().
		 strupr(saga);
		 printf("saga in Upper case :");
		 puts(saga);
		 // Changing String saga in Lower Case using strlwr().
		 strlwr(saga);
		 printf("saga in Lower case :");
		 puts(saga);
		 // Use of strset().
		 printf("Original saga String is %s\n",saga);
		 printf("Now Modified saga String is %s",strnset(saga,'*',5));
	}
