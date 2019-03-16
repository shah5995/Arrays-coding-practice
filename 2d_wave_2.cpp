#include<iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int a[50][50];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int r=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
            cout<<a[j][i]<<",";
            }
            else
            {
                cout<<a[m-j-1][i]<<",";
            }
        }
    }
    cout<<"END";
    
	return 0;
}
