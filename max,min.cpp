#include<iostream>
using namespace std;
int main()
{  int i=1,n;
cout<<"enter the no of no you want";
cin>>n;
int a[n];
int max=-1000000;
int min=1000000000;

while(i<=n)
{
	cout<<"enter the no.";
	cin>>a[i];
	if(a[i]>max)
	{
		max=a[i];
	}
	if(a[i]<min)
	{
		min=a[i];
	}
	i++;
	
}
cout<< " max is "<<max <<"min is"<<min;
}
