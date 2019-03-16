#include<iostream>
using namespace std;
int main() {
    int a[20][20];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    int r=0;int c=0;
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            r=0;
        }
        else
        {
            r=m-1;
        }
        for(int j=0;j<n;j++)
        {
            cout<<a[r][c]<<",";
            
            if(i%2==0)
        {
            r++;
        }
        else
        {
            r--;
        }
            
        }
        c++;
    }
    cout<<"END";
	return 0;
}
