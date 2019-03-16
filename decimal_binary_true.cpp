#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int n,count=0;
	cin>>n;
	int rem=0;
	while(n%2==0)
	{
		count++;
		n=n/2;
	}
	while(n>0)
	{
			rem=rem*10+n%2;
			
	
	n=n/2;
		
		
	}
	cout<<rem*pow(10,count);
}
