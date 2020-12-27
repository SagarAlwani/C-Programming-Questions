	#include<stdio.h>               //header file
	#include<conio.h>               //header file
 	int main()
 	{int r;
 	float area;
 	printf("Enter the radius");
 	scanf("%d",&r);
 	area = 3.14*r*r;           //logic
 	printf("the area of circle is %.2f \n",area);           //by default float shows 6 digits afer decimal but using .2f it willl only show two digits after decimal
 	getch();
 	}
 
