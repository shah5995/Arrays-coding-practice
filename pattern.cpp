#include<iostream>
using namespace std;
int main()
{
	
	int i,j,n;
	
	int c=0;
	cin>>n;
	for(i=0;i<n;i++)
	{ char a='A';
		for(j=0;j<n-i;j++)
		{
			cout<<a;
			a++;
		}
		for(j=n-i;j>=1;j--)
		{
			a--;
			
			cout<<a;
			
		}
		cout<<endl;
		
	}
}
