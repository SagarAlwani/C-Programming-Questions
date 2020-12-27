#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[10],n,i,pos;
		printf("Enter the size\n");
		scanf("%d",&n);
		/*input*/
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i+1);
			scanf("%d",&a[i]);
		}
		printf("Enter the Position to Delete that Element from Array\n");
		scanf("%d",&pos);
		if(pos<=n)
		{
			pos--;
			for(i=pos;i<n;i++)
		{
			a[i]=a[i+1];
		}
		n--;
		for(i=0;i<n;i++)
		{
			printf("\t%d",a[i]);
		}
	}	
		
		else
		printf("Unknown Position (Error)");
	}
