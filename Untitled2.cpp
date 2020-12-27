#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[20],n,key,i,j;
		printf("Enter the SIZE of Array\n");
		scanf("%d",&n);
		printf("Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("a[%d] = ",i);
			scanf("%d",&a[i]);
		}
		for(j=0;j<n;j++)
		{
			key=a[j];
			for(i=j-1;i>=0;i--)
			{
				if(a[i]<key)
				{
					a[i]=a[i+1]^a[i];
					a[i+1]=a[i]^a[i+1];
					a[i]=a[i+1]^a[i];
				}
			}
		}
		for(i=0;i<n;i++)
		{
			printf("a[%d] = %d\n",i,a[i]);
		}
	}
