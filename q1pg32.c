#include<conio.h>
#include<stdio.h>
	int main()
{
	int num;
	printf("enter the number to be checked\n");
	scanf("%d",&num);
	{	  
		if(num%2==0)
		printf("the number:%d is even",num);
		else		
		printf("the number:%d is odd",num);
	}
	getch();
   
	
}
