#include<conio.h>
#include<stdio.h>
int l_search(int s_raga[],int size,int element);
	void main()
	{
		int raga[20],n,element,i;
		printf("Enter the Size of Array\n");
		scanf("%d",&n);
		printf("Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("raga[%d] = ",i);
			scanf("%d",(raga+i));
		}
		printf("Element that you want to Search\n");
		scanf("%d",&element);
		l_search(raga,n,element);
	}
	int l_search(int s_raga[],int size,int element)
	{
		 int flag=0,i;
		for(i=0;i<size;i++)
		{
			if(s_raga[i]==element);
			{
				flag=1;
			break;
			}
		}
		if(flag==0)
		printf("Element do not Exist in the Specified Array\n");
		else
		printf("Element Exist at location : %d",i);
	}
