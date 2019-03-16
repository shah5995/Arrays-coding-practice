#include<iostream>
using namespace std;
int main() {
    int test;
    cin>>test;
    int a[10];
    for(int b=0;b<test;b++)
    {
        int k,m,n,count;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int p=0;
        m=0;
        //cout<<"shah";
        for(int i=n;i>0;i--)
        {
        
            for(int j=n-i;j>=0;j--)
            {count=0;
            cout<<i<<" "<<j<<endl;
            	//cout<<"faisal";
                for( k=j;k<i+j;k++)
                {
                	//cout<<"shah faisal";
                	if(a[k]==0)
                	{
                		count++;
					}
                }
                k--;
                if(count==(i-count))
                {
                	if(j==0)
                	{
                	cout<<k;
						 cout<< j <<"  "<<j+i-1;
                    p=1;
                    break;	
					}
					else
					{
							cout<<k;
						 cout<< j <<"  "<<j+i-1;
                    p=1;
                    break;
					
					}
                
                   
                    
                }
            }
            if(p==1)
            {
            	m=1;
            	break;
			} 
        }
        if(m==0)
        {
        	cout<<"Not found";
		}
    }
	return 0;
}
