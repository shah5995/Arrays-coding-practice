#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
	if(i==n)
	{
		for(int j=1;j<i;j++)
	{
		cout<<" "<<j<<" ";
	}}
	else
	{
			for(int j=1;j<=i;j++)
	{
		cout<<" "<<j<<" ";
	}
	}
	for(int k=1;k<=2*(n-i)-1;k++)
	{
		cout<<"   ";
	}
	for(int j=i;j>=1;j--)
	{
		cout<<" "<<j<<" ";
	}
	cout<<endl;
	
}
}
