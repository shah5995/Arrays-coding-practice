#include<iostream>
using namespace std;
int main()
{
	bool a[10000]={false};
	int no;
	cin>>no;
	int n=2;
	for(int i=2;i*i<=no;i++)
	{
		if(a[i]==false)
		{
			for(int j=2;i*j<no;j++)
			{
				a[i*j]=true;
			}
		}
	}
	for(int i=2;i<=no;i++)
	{
		if(!a[i])
		{
			cout<<i<<endl;
		}
	}
	
	
}
