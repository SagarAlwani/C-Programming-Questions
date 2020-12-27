//conditional operator c questions(Three  Number Comarison)
#include<stdio.h>
#include<conio.h>
	int main()
	{
		int a,b,c,max;
		
		printf("Enter The First Number to be compared\n");
		scanf("%d",&a);
		printf("Enter The Second Number compared to\n");
		scanf("%d",&b);
		printf("Enter The Second Number compared to\n");
		scanf("%d",&c);
		max = ((a>b)?(a>c?a:c) :  (b>c?b:c));
		printf("The maximum of the two Numbers is %d",max);
	}
