#include<iostream>
using namespace std;
int sum(int a[10],int n,int index)
{
	if(index==n-1)
	{
		return a[index];
	}
	int ans=sum(a,n,index+1); 
	return( a[index]+ans);
}
int main()
{
	int n,a[10];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i=0;
	int r=sum(a,n,i);
	cout<<r;
}
