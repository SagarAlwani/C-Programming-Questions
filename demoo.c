/*Write a program to read and Write Elements of Array.*/
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[10],n,i;
		printf("Enter the size");
		scanf("%d",&n);
		/*input*/
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i+1);
			scanf("%d",&a[i]);
		}
		/*output*/
		for(i=0;i<n;i++)
		{
			printf("\t%d",a[i]);
		}
		getch();
	}
