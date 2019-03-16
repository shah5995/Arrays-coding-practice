#include<iostream>
using namespace std;
#include<cstring>
int main() {
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    int c1,c2;
    c1=c2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c1++;
        }
        else if(a[i]==1)
        {
            c2++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i<c1)
        {
            a[i]=0;
        }
        else if(i<c2+c1)
        {
            a[i]=1;
        }
        else
        {
            a[i]=2;
        }
        cout<<a[i]<<endl;
    }
	return 0;
}
