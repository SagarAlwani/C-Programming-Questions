/*Binary Search*/
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,j;
		int arr[]={50,40,30,20,10};
		int n=sizeof(arr)/sizeof(arr[0]);
		for(j=1;j<n;j++)
		{
			int key=arr[j];
			for(i=j-1;i>=0;i--)
			{
				if(key<arr[i])
				arr[i+1]=arr[i];
				else
				break;
			}
			arr[i+1]=key;
		}
		for(i=0;i<n;i++)
			printf("arr[%d] = %d\n",i,arr[i]);
			int target=520;
				if(target<arr[n/2+1])
				{
					for(i=0;i<n/2+1;i++)
					{
						if(target==arr[i])
						printf("%d presesnt at %d",target,i);	
					}
				}
				else if(target>arr[n/2+1])
				{
					for(i=n/2+1;i<=n;i++)
					{
						if(target==arr[i])
						printf("%d presesnt at %d",target,i);
					}
				}
				else if(target==arr[n/2+1])
						printf("%d presesnt at %d",target,n/2+1);
						else
						printf("%d is Absent",target);			
			}
