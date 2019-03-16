#include<iostream>
using namespace std;
int main()
{
	int m,a[10][10],b[10][10];
	cin>>m;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}

	
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(b[i][j]==0)
			{
				for(int k=0;k<m;k++)
				{
					a[i][k]=0;
					a[k][j]=0;
				}
				
				
			}
		}
	}
	cout<<endl<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
