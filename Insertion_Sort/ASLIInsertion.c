#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,j,key,n;
		int a[20];
		printf("Enter Size of Array\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("a[%d] = ",i);
			scanf("%d",&a[i]);
		}
		for(j=1;j<n;j++)
		{
			key=a[j];
			for(i=j-1;i>=0;i--)
			{
				if(a[i]>key)
				{
				a[i]=a[i]^a[i+1];
				a[i+1]=a[i+1]^a[i];
				a[i]=a[i]^a[i+1];
				}
			}
		}
		for(i=0;i<n;i++)
			printf("a[%d] = %d\n",i,a[i]);
	}
