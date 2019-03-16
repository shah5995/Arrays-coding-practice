#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
		k=i+1;
        for(int j=0;j<n-i-1;j++)
         {
             cout<<"  ";
         }
         for( j=0;j<=i;j++)
         {
             cout<<k+j<<" ";
             
         }
        int m=k+j-1;
      //  cout<<m;
        m--;
       // cout<<m;
		   for(int l=0;l<i;l++)
		   {
		   	cout<<m-l<<" ";
		   }
         cout<<endl;
        
    }
   // cout<<k<<endl;
    k--;
    for(int i=n-1;i>=1;i--)
    {
    	for(int j=1;j<=n-i;j++)
    	{
    		cout<<"  ";
		}
		int j;
		for( j=1;j<=i;j++)
		{
			cout<<i+j-1<<" ";
		}
		int m=i+j-1;
		m--;
    	for(j=1;j<=i-1;j++)
    	{
    		cout<<m-j<<" ";
		}
		cout<<endl;
	}
    
}

