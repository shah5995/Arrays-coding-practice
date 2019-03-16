#include<iostream>
using namespace std;
void pairs(int a[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		int sum=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(sum+a[j]==x)
			{
				cout<<a[i]<<" "<<a[j]<<endl;
			}
		}
	}
	
}
int main(){
	int n;
	cin>>n;
	int a[20];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	 
	int x;
	cin>>x;
	pairs(a,n,x);
}
