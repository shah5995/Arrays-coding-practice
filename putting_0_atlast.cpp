#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[500];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int c=0;int p=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0&&c!=0)
		{
			int temp=a[p];
			a[p]=a[i];
			a[i]=temp;
			c--;
			i=p;
			if(c!=0)
			{
				p++;
			}
		}
		else if(a[i]==0)
		{
			if(c==0)
			{
				p=i;
			}
			c++;
			
		}
	}
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
