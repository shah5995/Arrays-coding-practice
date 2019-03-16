#include<iostream>
using namespace std;
int main()
{
	
	int i;
	int n;
	int c=0;
	cin>>n;
	for(i=0;i<32;i++)
	{
		if((n&1)==1)
		{
			c++;
			
		}
		n= n>>1;
	}
	cout<<n;
}
