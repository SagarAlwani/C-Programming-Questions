#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[10],n,i,max,smax;
		printf("Enter the Size of the Array\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i+1);
			scanf("%d",&a[i]);
		}
		if(a[0]>a[1])
		{
			max=a[0];
			smax=a[1];
		}
		else
		{
			max=a[1];
			smax=a[0];
		}
		for(i=2;i<n;i++)
		{
			if(a[i]>max)
			{
				smax=max;
				max=a[i];
			}
			else if(a[i]>smax)
			smax=a[i];
		}
		printf("The Second Maximum Element of the Array is : %d",smax);
		getch();
	}
