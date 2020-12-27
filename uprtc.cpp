#include<conio.h>
#include<iostream>
using namespace std;
#define SIZE 20
	int main()
	{
		int i,j,r,c;
		int saga[SIZE][SIZE];
		cout<<"Enter no. of Rows\n";
		cin>>r;
		cout<<"Enter no. of Columns\n";
		cin>>c;
		while(r!=c)
		{
			cout<<"Matrix can be changed in upper Triangular Matrix Only if it is a Square Matrix\n";
			cout<<"Enter no. of Rows\n";
			cin>>r;
			cout<<"Enter no. of Columns\n";
			cin>>c;
		}
			cout<<"Key in Matrix Elements\n";
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<"saga"<<i<<j<<" = ";
				cin>>saga[i][j];
			}
		}
			cout<<"Entered Matrix :\n";
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<saga[i][j]<<" ";
			}
			cout<<endl;	
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<=i-1;j++)
			{
				saga[i][j]=0;
			}
			
		}
		cout<<"Upper Triangular Matrix :\n";
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<saga[i][j]<<" ";
			}
			cout<<endl;	
		}
		return 0;
	}

