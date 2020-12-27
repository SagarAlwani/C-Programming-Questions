#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a[10],n,i,pos,item;
		printf("Enter the Size\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i+1);
			scanf("%d",&a[i]);
		}
		printf("Enter the Position\n");
		scanf("%d",&pos);
		printf("Enter the item\n");
		scanf("%d",&item);
		pos--;
		for(i=n;i>=pos;i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=item;
		n++;
		for(i=0;i<n;i++)
		{
			printf("\t%d",a[i]);
		}
		getch();
	}
