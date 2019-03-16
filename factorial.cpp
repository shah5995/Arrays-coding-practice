#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else return n*fact(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl<<"enter ";
	int m;
	cin>>m;
	int r;
	cin>>r;
	cout<<endl<<fact(m)/(fact(m-r)*fact(r));
}
