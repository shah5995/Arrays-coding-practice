#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
		int r=n-1;
	for(int i=1;i<=n/2+1;i++)
	{
		for(int j=0;j<r;j++)
			{
				cout<<"   ";
			}
			if(i==1)
			{
		for(int j=i;j>1;j--)
		 {
		 	cout<<" "<<j<<" ";
		 }		
			}
		else
		{
			for(int j=i;j>=1;j--)
		 {
		 	cout<<" "<<j<<" ";
		 }
		}
		
			
	
		for(int j=1;j<=2*i-3;j++)
		{
			cout<<"   ";
		}
		 
		for(int j=1;j<=i;j++)
		{
			cout<<" "<<j<<" ";
		}
	
	
	r=r-2;
	cout<<endl;
	
	
	
	}
	r=2;
	for(int i=1;i<=n/2;i++)
	{
		for(int j=0;j<r;j++)
			{
				cout<<"   ";
			}
	   for(int j=n/2-i+1;j>=1;j--)
		 {
		 	cout<<" "<<j<<" ";
		 }	
		for(int j=1;j<=2*(n/2-i)-1;j++)
		{
			cout<<"   ";
		}
		
		if(i==n/2)
		{
			for(int j=1;j<n/2+1-i;j++)
		{
			cout<<" "<<j<<" ";
		}	
		}
			else
			{
				for(int j=1;j<=n/2+1-i;j++)
		{
			cout<<" "<<j<<" ";
		}	
			}
			r=r+2;
			cout<<endl;
	}
	
	
	
	
	}
