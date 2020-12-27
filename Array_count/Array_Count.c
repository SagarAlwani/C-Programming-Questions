/*WACP To Check Duplicate Values in An Array*/
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[10],n,i,j,count=0;
		printf("Enter the Size of the Array\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i+1);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[i+1])
				count++;
				break;
			}
		}
		printf("Total No of Elements Repeated : %d",count);
		getch();
	}
