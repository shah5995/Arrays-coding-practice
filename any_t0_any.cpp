#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int sb,db,sn;
	cin>>sb>>db>>sn;
	int ans1,i=0;
	int r=0;
	while(sn>0)
	{
		r=r+(sn%10)*pow(sb,i);
		sn=sn/10;
		i++;
	}
	int m=r;
	//cout <<m<<endl;
	int c=0;
	while(r%db==0)
	{
		c++;
		r=r/db;
	}
	r=0;
	while(m>0)
	{
		r=r*10+m%db;
		m=m/db;
	}
//	cout<<r<<endl;
	ans1=0;
	while(r>0)
	{
		ans1=ans1*10+r%10;
		r=r/10;
	}
	
	cout<<ans1*pow(10,c);
}
