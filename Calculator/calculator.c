#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,max,k;
	printf("Enter 1 for Addition\n");
	printf("Enter 2 for Substraction\n");
	printf("Enter 3 for Multiplication\n");
	printf("Enter 4 for Division\n");
	printf("Enter 5 for Exit\n");
	
	scanf("%d",&k);
		switch(k)
		{
			case 1:
				     printf("Enter First Number");
					 scanf("%d",&a);
					 printf("Enter Second Number");
					 scanf("%d",&b);
					 max=a+b;
					 printf("The result of Addition is :%d",max);
					 break;
			case 2:
				     printf("Enter First Number");
					 scanf("%d",&a);
					 printf("Enter Second Number");
					 scanf("%d",&b);
					 max=a-b;
					 printf("The result of Substraction is :%d",max);
					 break;
			case 3:
				     printf("Enter First Number");
					 scanf("%d",&a);
					 printf("Enter Second Number");
					 scanf("%d",&b);
					 max=a*b;
					 printf("The result of Multiplication is :%d",max);
					 break;
			case 4:
				     printf("Enter First Number");
					 scanf("%d",&a);
					 printf("Enter Second Number");
					 scanf("%d",&b);
					 max=a/b;
					 printf("The result of Division is :%d",max);
					 break;
			case 5:
				     exit(0);
				     break;
			default:
					 printf("Invailid Input");		     
		}
	}
