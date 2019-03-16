#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int gap=2*n-1;
	for(int i=0;i<=n;i++)
	{
		if(i==n)
		{
		for(int j=n;j>n-i;j--)
		{
			cout<<" "<<j<<" ";
		}	
		}
		else 
		{
			for(int j=n;j>=n-i;j--)
		{
			cout<<" "<<j<<" ";
		}
		}
		for(int k=gap;k>0;k--)
		{
			cout<<"   ";
		}
	
		{
			for(int j=n-i;j<=n;j++)
		{
			cout<<" "<<j<<" ";
		}
		}
		
			
		cout<<endl;
		gap=gap-2;
		
	}
	for(int i=0;i<n;i++)
	{
			for(int j=n;j>i;j--)
		{
			cout<<" "<<j<<" ";
		}
		for(int j=0;j<2*i+1;j++)
		{
			cout<<"   ";
		}
		
				for(int j=i+1;j<=n;j++)
		{
			cout<<" "<<j<<" ";
		}
		cout<<endl;
		
		
		
	}
	
}
