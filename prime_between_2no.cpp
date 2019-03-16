#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int a=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                a=0;break;
                
            }
        }
            if(a==1)
            {
                cout<<i<<" ";
                
            }
    }
	return 0;
}
