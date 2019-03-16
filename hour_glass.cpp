#include<iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"   ";
        }
        for( k=n-i;k>=0;k--)
        {
            cout<<" "<<k<<" ";
        }
        k++;
        for(k=1;k<=n-i;k++)
        {
        	cout<<" "<<k<<" ";
		}
		cout<<endl;
    }
       for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<"   ";
        }
        for( k=i;k>=0;k--)
        {
            cout<<" "<<k<<" ";
        }
        k++;
        for(k=1;k<=i;k++)
        {
        	cout<<" "<<k<<" ";
		}
		cout<<endl;
    }
	return 0;
}
