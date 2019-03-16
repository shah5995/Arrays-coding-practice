#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j,k=i+1;
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
    
}

