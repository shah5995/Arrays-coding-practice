#include<iostream>
using namespace std;
int main() {
    int n,a[100000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int A,k;
        cin>>A>>k;
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(A%a[j]==0)
            {
                c++;
            }
        }
        cout<<c;
        if(c==k)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
        cout<<endl;
    }
	return 0;
}
