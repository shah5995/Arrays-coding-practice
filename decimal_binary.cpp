#include<iostream>
using namespace std;
int main() {
    int i=1;int n;
    cin>>n;
    int deci=0;
    while(n>0)
    {
    	int r=1;
    	for(int k=1;k<i;k++)
    	{
    		r=r*2;
		}
		deci=deci+r*(n%10);
		n=n/10;
		i++;
		
		
	}
    cout<<deci;
	return 0;
}
