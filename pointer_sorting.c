#include<stdio.h>
#define SIZE 50
	void main()
	{
		int n,i,j,key,saga[SIZE];
		printf("Please Enter Size\n");
		scanf("%d",&n);
		printf("Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
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
			printf("saga[%d] = %d\n",i,*(saga+i));
	}
		/**(saga+j+1)=*(saga+j);
			}			
			*(saga+j+1)=key;*/
