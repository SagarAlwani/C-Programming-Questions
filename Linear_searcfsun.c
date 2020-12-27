/*Linear Search*/
#include<conio.h>
#include<stdio.h>
	int main()
	{
		int arr[]={10,20,30,40,50};
		int x = 20;
		int n = sizeof(arr)/sizeof(arr[0]);
		int result = search(arr,n,x);
		(result==-1)?printf("Element is not Present in the Array\n"):printf("Element is Present at Index %d",result);
		return 0;
	}
	int search(int arr[],int n,int x)
	{
		int i;
		for(i=0;i<n;i++)
		{
			if(arr[i]==x)
			return i;
		}
			return -1;
	}
