#include<stdio.h>
#define SIZE 50
	void main()
	{
		int i,j,n,k=0,count=0,key;;
		int saga[SIZE];
		printf("Enter the Size of Array\n");
		scanf("%d",&n);
		printf("Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] =",i);
			scanf("%d",(saga+i));
		}
			for(i=1;i<n;i++)
		{
			key=*(saga+i);
			for(j=i-1;j>=0;j--)
			{
				if(*(saga+j)>key)
				*(saga+j+1)=*(saga+j);
				else
				break;
			}
			*(saga+j+1)=key;
		}
		printf("Sorted Array is : \n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = %d\n",i,*(saga+i));
		}
		printf("Frequency are as follows\n");
		for(j=0;j<n;j++)
		{
			count=1;
			for(i=j+1;i<n;i++)
			{
				if(*(saga+j)==*(saga+i))
				count++,j++;
			}
			printf("%d : %d\n",*(saga+j),count);
		}
	}
	

