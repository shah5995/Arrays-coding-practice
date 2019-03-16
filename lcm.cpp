#include<iostream>
using namespace std;
int main() {
    int n1,n2,l1,l2;
    cin>>n1;
    cin>>n2;
    l1=n1;l2=n2;
    if(n1<n2)
    {
        int temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
    if(n1%n2==0)
    {
        cout<<l1*l2/n2;
        return 0;
    }
    else
    {
    while(n1%n2!=0)
    {
        int t=n1%n2;
        n1=n2;
        n2=t;
    }
    cout<<l1*l2/n2;
    }
	return 0;
}
