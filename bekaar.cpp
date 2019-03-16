#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;
int r;
int o_sum=0;
int e_sum=0;
while(n>0)
{
	r=n%10;
	if(i%2==0)
	{
		e_sum+=r;
	}
	else
	{
		o_sum+=r;
	}
	n=n/10;
	i++;
	
}
cout<<o_sum<<endl<<e_sum;



}
