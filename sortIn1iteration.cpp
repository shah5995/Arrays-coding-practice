#include<iostream>
using namespace std;
int main()
{
	int n,a[500];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int p,c,r=a[0];
	c=0;
	p=0;
	for(int i=0;i<n;i++)
	{
		
		if(a[i]==1)
		{
			if(p<i)
			{
			p=i;	
			}
		
			c++;
			
			
		}
		else 
		{
			if(c!=0)
			{
			
			int temp;
			temp=a[i];
			a[i]=a[p];
			a[p]=temp;
			c--;
			p++;
		}
		
		}
		
		
		
	}
		for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	
}
