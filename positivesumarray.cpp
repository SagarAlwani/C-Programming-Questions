#include <iostream>
using namespace std;
int main()
{
	int i,n,saga[10],sum=0;
	cout<<"Enter The Size of Array\n";
	cin>>n;
	cout<<"Enter Array Elements\n";
	for(i=0;i<n;i++)
	{
		cout<<"saga"<<i<<" = ";
		cin>>saga[i];
		if(saga[i]>0)
			sum=sum+saga[i];
	}
	cout<<"The Sum of All +ve Numbers in the Array is"<<sum;
	return(0);
	}
