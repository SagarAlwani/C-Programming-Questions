#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[10],n,i,max,smax;
		printf("Enter the Size of the Array\n");
		scanf("%d",&n);
		/*Input*/
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i+1);
			scanf("%d",&a[i]);
		}
		max=a[0];
		/*Output*/
		for(i=0;i<n;i++)
		{
			if(max<a[i])
			smax=max;
			max=a[i];
		}
		printf("The Second Maximum Element of the Array is : %d",smax);
		getch();
	}
