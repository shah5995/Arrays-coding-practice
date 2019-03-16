#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
int decimal_hexa(int n)
{
	int r=0;
	int ans=n;
	int c=0;
	while(ans>0)
	{
		if(ans%16==0)
		{
			c++;
			
		}
		ans=ans/16;
	}
	
	while(n>0)
	{
		r=r*10+n%16;
		n=n/16;
	}
	return(r*pow(10,c));
}
int main()
{
	int n;
	cin>>n;
	int r=decimal_hexa(n);
	cout<<r;
	
	
}
