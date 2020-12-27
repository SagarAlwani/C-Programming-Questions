#include<conio.h>
#include<stdio.h>
	int main()
	{
		int a,b,c,d,max;
		printf("Enter the 1st Number\n");
		scanf("%d",&a);
		printf("Enter the 2nd Number\n");
		scanf("%d",&b);
		printf("Enter the 3rd Number\n");
		scanf("%d",&c);
		printf("Enter the 4th Number\n");
		scanf("%d",&d);
		max=(a>b)?(a>c)?((a>d)?a:d): (c>d)?c:d : (b>c)?((b>d)?b:d)  :  ((c>d)?c:d);
		printf("The maximum Number is %d",max);
		}
	
