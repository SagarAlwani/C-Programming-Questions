#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[10],n,i,pos,max;
		printf("Enter the Size\n");
		scanf("%d",&n);
		/*Input*/
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i+1);
			scanf("%d",&a[i]);
		}
		/*Maximum*/
		max=a[0];
		for(i=0;i<n;i++)
		{
			if(max<a[i])
			max=a[i];
		}
		/*output*/
		printf("The Maximum Element of the Array is : %d",max);
		getch();
	}
