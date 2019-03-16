#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            if(j==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"*";
        if(i==0)
        {
        for(int j=0;j<n/2;j++)
        {
         cout<<"*";   
        }
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
        	if(i==n/2-1)
        	{
        		cout<<"*";
			}
			else
			{
				cout<<" ";
			}
            
        }
        cout<<"*";
         for(int j=0;j<n/2;j++)
        {
        	if(j==n/2-1)
        	{
        		cout<<"*";
			}
			else
			{
				cout<<" ";
			}
            
        }
        cout<<endl;
        
    }
	return 0;
}
