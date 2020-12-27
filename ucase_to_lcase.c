//change from ucase to lcase
#include<conio.h>
#include<stdio.h>
int main ()
{char ch;
printf("Enter the character");
scanf("%c",&ch);
if(ch>=65&&ch<=90)
{ch = ch+32;
printf("The Character in Lcase is %c",ch);
}
else
printf("The Character:%c is already in Lcase",ch);
getch();

}

