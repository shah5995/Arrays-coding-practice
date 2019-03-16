#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
	
	int arr[20];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum, max[10]={0};
	
	int k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{sum=0;
			for(k=0;k<i+1;k++)
			{
				sum=sum+arr[j+k];
			
			}
				if(sum>max[i])
			{
				max[i]=sum;
			}
		}
		
		
	}
/*	cout<<"subarrray with max value is an with max index is";
	for(int i=0;i<n;i++)
	{
		cout<<max[i]<<" ";
	}*/
	int m=0;
	for(int i=0;i<n;i++)
	{
		if(max[i]>m)
		{
			m=max[i];
		}
	}
	cout<<"\n maximum value is "<<m;
}
}
