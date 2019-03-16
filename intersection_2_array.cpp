#include<iostream>
using namespace std;
#include<cstring>
int main() {
    int n,a[1000],b[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int r=0;
    int ans[1000];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-r;j++)
        {
            if(a[i]==b[j])
            {
              ans[r]=a[i];
             // cout<<ans[r];
                
                for(int k=j;k<n-r;k++)
                {
                    b[k]=b[k+1];
                    
                }
                  r++;
                break;
            }
        }
    }
    int v=r;
    for(int i=0;i<r;i++)
    {
    	for(int j=1;j<r-i;j++)
    	{
    		if(ans[j]<ans[j-1])
    		{
    			int temp=ans[j];
    			ans[j]=ans[j-1];
    			ans[j-1]=temp;
			}
    		
		}
	}
    cout<<"[";
    for(int i=0;i<r;i++)
    {
        if(i==r-1)
        {
            cout<<ans[i]<<"]";
        }
        else
        {
            cout<<ans[i]<<" ,";
        }
    }
	return 0;
}
