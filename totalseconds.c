#include<conio.h>
#include<stdio.h>
int main()
{int hrs,min,sec;
printf("enter hrs\nenter min\nenter seconds");
scanf("%d %d %d",&hrs,&min,&sec);
sec = hrs*3600+min*60+sec;
printf("total seconds are %d",sec);
getch();	
}

