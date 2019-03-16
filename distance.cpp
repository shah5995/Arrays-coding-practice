#include<iostream>
using namespace std;
# include<cmath>
int main()
{char a;
int n;
cout<<"enter the no of times you want to enter the direction";
cin>>n;
int i,r,s;
r=s=0;
for(i=0;i<n;i++)
{
	a=cin.get();
	
	if(a=='e')
	{
		r++;
	}
	else if(a=='w')
	{
		r--;
	}
	else if(a=='n')
	{
		s++;
	}
	else if(a=='s')
	{
		s--;
	}
	
	
}
int j=r;
cout<<abs(r)<<abs(s);
for(i=0;i<abs(r);i++)
{
		if(j>0)
		{
			cout<<"E";
		}
		else
		{
		
		cout<<"W";
}}
int k=s;
for(i=0;i<abs(s);i++)
{
		if(k>0)
		{
			cout<<"N";
		}
		else
{
		cout<<"S";}
}}





