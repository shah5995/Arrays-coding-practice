#include<iostream>
using namespace std;
void convert(int n)
{
	if(n==0)
	{
		return;                                                                         
	}
	convert(n/10);
	int r=n%10;
		if(r==0)
	{
		cout<<"zero ";
	}
	else	if(r==1)
	{
		cout<<"one ";
	}
	else	if(r==2)
	{
		cout<<"two ";
	}
	else	if(r==3)
	{
		cout<<"three ";
	}
	else	if(r==4)
	{
		cout<<"four ";
	}
	else	if(r==5)
	{
		cout<<"five ";
	}
	else	if(r==6)
	{
		cout<<"six ";
	}
	else	if(r==7)
	{
		cout<<"seven ";
	}else	if(r==8)
	{
		cout<<"eight ";
	}
	else	if(r==9)
	{
		cout<<"nine ";
	}
	return;
}
int main()
{
	int r,n;
	cin>>n;
	
	//cout<<r<<endl;
	convert(n);
}
