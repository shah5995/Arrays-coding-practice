#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
	return 0;
}
