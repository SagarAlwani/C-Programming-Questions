#include<stdio.h>
#include<conio.h>
	int main()
	{
		int a,b,c,d,max;
		printf("Enter The First Number to be compared\n");
		scanf("%d",&a);
		printf("Enter The Second Number compared to\n");
		scanf("%d",&b);
		printf("Enter The Second Number compared to\n");
		scanf("%d",&c);
		printf("Enter The Second Number compared to\n");
		scanf("%d",&d);
		max=(a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
		printf("The maximum among The Numbers is %d",max);
	}
