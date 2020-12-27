#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,max,i,a[10];
		printf("Enter the Number");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i+1);
			scanf("%d",&a[i]);
		}
		max=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>max)
			max=a[i];
		}
		printf("Maximum is %d",max);
		getch();
	}
