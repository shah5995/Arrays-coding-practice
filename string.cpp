#include <iostream>
using namespace std;
int main() {
    int n,a,b;
    cin>>n;
    a=0;
    b=1;
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        if(i==0)
        {
            ans=0;
        }
        else if(i==1)
        {
            ans=1;
        }
        else
        {
            ans=a+b;
            a=b;
            b=ans;
        }
    }
    cout<<ans;
    
}

