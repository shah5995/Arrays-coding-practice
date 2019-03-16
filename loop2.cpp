#include<iostream>
using namespace std;
int main()
{  int n,k=1;
int i=1;
int a=0;
int j=1;
int m;

cout<<"enter the no of lines you want in the pattern \n\n";
cin>>n;
while(i<=n)
{
	j=1;
	k=1;
	while(j<=n-i)
	{
		cout<<" ";
		j++;
	}
	while(k<=i)
	{	a++;
		cout<<a;
		m=a;
	
		k++;
	}

	while(m>=i+1)
	{
			a--;
		cout<<a;
	
		m--;
	}
	i++;
	cout<<"\n";
}
	
	
}

