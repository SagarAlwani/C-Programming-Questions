/*Largest of 3 Numbers*/
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b,c,max;
		printf("Enter Value of a\n");
		scanf("%d",&a);
		printf("Enter Value of b\n");
		scanf("%d",&b);
		printf("Enter Value of c\n");
		scanf("%d",&c);
		max=a;
		if(b>max)
		max=b;
		if(c>max)
		max=c;
		printf("Largest of these Numbers is %d",max);
	}
