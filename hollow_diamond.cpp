#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int r=n/2+1;
int gap;
for(int i=0;i<n/2+1;i++)
{
	gap=0;
	for(int j=0;j<n/2+1-i;j++)
	{
		cout<<"*";
	}
	for(int k=0;k<2*i-1;k++)
	{
		gap++;
		cout<<" ";
	}
	if(i==0)
	{
			for(int j=n/2-i;j>0;j--)
	{
		cout<<"*";
	}
	}
	else
	{
		for(int j=n/2-i;j>=0;j--)
	{
		cout<<"*";
	}
	}
	r--;
	cout<<endl;


}
r++;
//cout<<n/2<<r<<gap;
for(int i=n/2;i>0;i--)
{
	r++;
		gap=gap-2;
		if(i==1)
	{
			for(int j=0;j<n;j++)
	{
		cout<<"*";
	}
		}
		else
		{
		
	
	
	for(int j=0;j<r;j++)
	{
		cout<<"*";
	}
    	for(int k=0;k<gap;k++)
	{
		cout<<" ";
	}
	

		{
				for(int j=0;j<r;j++)
	{
		cout<<"*";
	}
		}
}
	cout<<endl;
}




}
