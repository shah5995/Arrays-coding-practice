#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    while(n>0)
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            int a;
            if(i==0)
            {
                a=1;
            }
            else{
                a=a*2;
            }
            sum=sum+a*n%10;
            n=n/10;
        }
        ans=ans*10+sum;
    }
    int ans2=0;
    while(ans>0)
    {
        ans2=ans2*10+ans%10;
        ans=ans/10;
    }
    cout<<ans2;
    
}

