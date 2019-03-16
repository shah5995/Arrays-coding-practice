#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int r=n/2;
	int c=0;
	for(int i=0;i<n/2+1;i++)
	{
		int a=i;
		for(int j=0;j<r;j++)
		{
			cout<<"  ";
		}
		for(int k=0;k<2*i+1;k++)
		{
			cout<<" *";
		}
		r--;
		
		
		cout<<endl;
		
	}
	
	for(int i=n/2;i>0;i--)
	{
		r++;
			for(int j=0;j<=r;j++)
		{
			cout<<"  ";
		}
		for(int k=0;k<2*i-1;k++)
		{
			cout<<" *";
		}
		cout<<endl;
		
		
		
	}
}
