#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int r=n;
int pos=0;
int rev=0;
while(n>0)
{
	pos++;
	int mod=n%10;
	int m=1;
	for(int i=0;i<mod;i++)
	{
		m=m*10;
	}
	rev=rev+pos*m;
	n=n/10;
}
cout<<rev/10;
}
