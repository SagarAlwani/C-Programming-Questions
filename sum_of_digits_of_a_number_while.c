//WAP to Calculate Sum of digits of a Number
#include<conio.h>                   //HeaderFiles
#include<stdio.h>                   //HeaderFiles
	int main()
	{
		int a,n,t=0;
		printf("Enter a Number To Check Sum of the Digits of a Number\n");
		scanf("%d",&n);
		while(n!=0)
		{
			a=n%10;
			t=a+t;                         //logic to check sum of digits of input number
			n=n/10;
		}
		printf("The Sum of The Digits of The Number is %d",t);
		getch();	
	}
