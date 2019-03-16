#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=0;
    int  b=1;
    int sum=a+b;
    cout<<0<<endl<<1<<endl;
    while(sum<=n)
    {
    	a=b;
    	b=sum;
    	cout<<sum<<endl;
    	sum=a+b;
	}
    
	return 0;
}
