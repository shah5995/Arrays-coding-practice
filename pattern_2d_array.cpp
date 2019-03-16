#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int arr[20][20];
	int n,k=1;
	char mp[]={"shah"};
//	int m=1;
	cout<<"enter the size of array";
	cin>>n;
	//int b=0;
	cout<<"enter he array"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>arr[i][j];
		}
	}
		for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	int r=n;
	int c=n-1;
	int p,q,o=0;
	p=q=1;
	 int m=0;
	 int c1,c2;
	 c1=1;
	 c2=0;
	 
	for(int i=1;i<=2*n-1;i++)
	{
		if(i%2!=0)
		{
			if(p==1)
			{
				for(int j=1;j<=r;j++)
				{
					cout<<arr[(r+1)%n][j+m];
				}
				p=0;
				m++;
			}
			else
			{
				for(int j=r;j>=1;j--)
				{
					cout<<arr[(r+1)%(n+1)][j-o];
				}
				p=1;
				o++;
			}
			r--;
		}
		else
		{
			if(q==1)
			{
				for(int j=1;j<=c;j++)
				{
					cout<<arr[j+c1][(c+1)%(n+1)];
				}
				q=0;
				c1++;
			}
			else
			{
				for(int j=c;j>=1;j--)
				{
					cout<<arr[j-c2][(c+1)%(n+1)];
				}
				q=1;
				c2++;
			}
			c--;
			
		}
	}
	
}
	

