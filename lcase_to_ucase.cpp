//cap to change rhe character from ucase to lcase;
#include<stdio.h>
#include<conio.h>
int main()
{char ch,k;
printf("Enter the Character");
scanf("%d",&ch);
if
(ch>=65||ch<=90)
{ch = ch+32;
printf("The character in Lower Case is %c",ch);}
else
printf("%c is already in Lower Case",ch);
	
}

