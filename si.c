#include<conio.h>
#include<stdio.h>
	int main()
	{
		float p,r,t,si;
		printf("Enter the Principle\n");
		scanf("%f",&p);
		printf("Enter the Rate\n");
		scanf("%f",&r);
		printf("Enter the Time\n");
		scanf("%f",&t);
	
		si = p*r*t/100.00;
		printf("The calculated Simple Interest is:%.2f",si);
		getch();
	}	
