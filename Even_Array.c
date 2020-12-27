//WACP to find Maximum And and Minimum Element in an Array;
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[10],n,i,t=0,k=0;
		printf("Enter the Nnumber");
		scanf("%d",&n);
		/*  Input  */
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i+1);
			scanf("%d",&a[i]);
		}
		/*  Output  */
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			t++;
			else
			k++;
		}
		printf("Total Even Numbers are : %d",t);
		printf("Total odd Numbers are : %d",k);
	}
