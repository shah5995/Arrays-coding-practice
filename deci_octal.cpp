#include<iostream>
using namespace std;
int main() {
    int i=1;int octal,deci;
    cin>>deci;
    int n=0;
    octal=0;
    while(deci>0)
    {
    	n=n*10+deci%8;
    	deci=deci/8;
	}
	
	while(n>0)
	{
		octal=octal*10+n%10;
		n=n/10;
	}
	cout<<octal;
    //cout<<deci;
	return 0;
}
