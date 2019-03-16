#include<iostream>
using namespace std;
int main()
{
	int n,x,a[10];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			if(a[j]<a[j-1])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	int r=0;
	for(int i=0;i<n-2;i++)
	{
		int sum=a[i];
		for(int k=i+1;k<n-1;k++)
		{
			int sum1=sum+a[k];
			
			for(int j=k+1;j<n;j++)
			{
			
				int sum2=sum1+a[j];
					if(sum2==x)
			{
				int m=a[i]*100+a[k]*10+a[j];
				if(r!=m)
				{
				cout<<a[i]<<","<<a[k]<<" and "<<a[j]<<endl;
				r=m;	
				}
				
				
			}
				
			}
		
		
	}
}
}
