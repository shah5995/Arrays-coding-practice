#include<iostream>
using namespace std;
int main()
{
	int a[500],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum=sum+a[j];
			if(sum==0)
			{
				cout<<"true   length of substring =="<<j+1-i;
				return(0);
			}
			
		}
	}
	cout<<"false";
}
