#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int total,sum=0;
	cin>>total;
	int check[100];
	for(int i=0;i<n;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{ int c=1;
			if(a[i]+a[j]==total)
			{
				check[i]=a[i]*a[j];
				for(int k=0;k<i;k++)
				{
					if(check[k]==a[i]*a[j])
					{    c=0;
						break;
					}
				
				}
				if(c==1)
				{
					
					  	cout<<a[i]<<" and "<<a[j]<<endl;	
				}
				
			
				
			}
		}
	//	cout<<endl;
		 
		 
		
	}
	
}
