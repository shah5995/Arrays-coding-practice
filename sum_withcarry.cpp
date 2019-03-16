#include<iostream>
using namespace std;
int main() {
    int m,n,a[50],b[50];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    if(m>n)
    {
        int r=m-n;
        for(int i=m-1;i>=r;i--)
        {
            b[i]=b[i-r];
        }
        for(int i=0;i<r;i++)
        {
            b[i]=0;
        }
        n=m;
    }
    else if(n>m)
    {int r=n-m;
        for(int i=n-1;i>=r;i--)
        {
            a[i]=a[i-r];
        }
        for(int i=0;i<r;i++)
        {
            a[i]=0;
        }
        m=n;
        
    }
    int c=0;
    int sum[50];
   
    
    for(int i=m-1;i>=0;i--)
    {
        sum[i]=a[i]+b[i]+c;
        if(sum[i]>9)
        {
        	c=sum[i]/10;
            sum[i]=sum[i]%10;
            
        }
        else
        {
            c=0;
        }
        
    }
    if(c!=0)
    {
    	cout<<c<<","<<" ";
	}
    for(int i=0;i<m;i++)
    {
        cout<<sum[i]<<","<<" ";
        
    }
    cout<<"END";
	return 0;
}
