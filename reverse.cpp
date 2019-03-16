#include<iostream>
using namespace std;
int main()
{
	
	int i;
	int n,rev=0;
	int c=0;
	cin>>n;
	while(n>0)
	{
		i=n%10;
		rev=10*rev+i;
		n=n/10;
		
	}
	cout<<rev;
}
