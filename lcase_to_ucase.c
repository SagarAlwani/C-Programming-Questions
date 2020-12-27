//cap to change the character from ucase to lcase;
#include<stdio.h>
#include<conio.h>
int main()
{char ch,k;
printf("Enter the Character");
scanf("%c",&ch);
if
(ch>=65||ch<=90)
{
k = ch+32;
printf("The character in Lower Case is %c",k);}
else
printf("%c is already in Lower Case",ch);
	
}

