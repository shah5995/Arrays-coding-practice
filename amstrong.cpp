#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter  the no";
	cin>>n;
	int r=n;
	int j,sum=0;
	while(n>0)
	{
		j=n%10;
		j=j*j*j;
		sum=sum+j;
		cout<<j<<endl;
		n=n/10;
	}
	if(sum==r)
	{
		cout<<"amstron number";
	}
	else
	{
		cout<<"not an amstrong";
	}
}

