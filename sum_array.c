/*WACP to find sum of all array Elements*/
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[10],n,i,t=0;
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
			t=t+a[i];
		}
		printf("\nThe Sum is : %d",t);
		getch();
	}
