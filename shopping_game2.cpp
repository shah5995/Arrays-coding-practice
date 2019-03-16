#include<iostream>
using namespace std;

int main() {
    int n,price[100000],q,type,money;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    cin>>q;
    for(int a=0;a<q;a++)
    {
        cin>>money>>type;
        int actual=0;
        for(int i=0;i<n;i++)
        {
            float r=money%price[i];
            if(r==0.00)
            {
                actual++;
            }
        }
        if(actual==type)
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
