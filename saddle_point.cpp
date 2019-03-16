#include<iostream>
using namespace std;
int main()
{
	int m,n,a[10][10];
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			
		}
	}
	cout<<"saddle point in this matrix are     :\n";
	for(int i=0;i<m;i++)
	{
		int r=1;
		int max=-17863;
		int p=987;
		for(int k=0;k<n;k++)
		{
			if(a[i][k]>max)
			{
				max=a[i][k];
				p=k;
			}
		}
		for(int j=0;j<m;j++)
		{
			if(a[i][p]<a[j][p])
			{
				r=0;
				break;
			}
			
			
		}
		if(r==1)
		{
			cout<<a[i][p]<<"  cordinates   "<<i<<" "<<p<<"    "<<endl;
		}
		
	}
}
