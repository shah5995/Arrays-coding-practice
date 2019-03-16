#include<iostream>
using namespace std;
#include<cmath>
int main() {
    int n,t,p1,p2;
    cin>>t;
    cout<<abs(-10+5);
    for(int i=0;i<t;i++)
    {
        
    cin>>n;
    int p[10000];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int money;
    int mi=10000;
    cin>>money;
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(p[j]+p[k]==money)
            {
            	cout<<abs(p[j]-p[k])<<mi<<endl;
            	
            	
            	if(abs(p[j]-p[k]) < mi)
            	
				{
            		mi=abs(p[k]-p[j]);
            	cout<<"Deepak should buy roses whose prices are "<<p[j]<<" and "<<p[k];	
				}
                
                break;
                
            }
        }
        cout<<endl;
    }
	
    }
    return 0;
}
