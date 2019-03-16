#include<iostream>
using namespace std;
# include<cstring>
int m,g;
int lessprime(int r)
{
    int i;
    int a;
    for(i=r;i>2;i--)
    {a=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                a=0;
                break;
            }
            
        }
        if(a==1)
        {
        	
            return(i);
        }
    }
    
}
int greaterprime(int r)
{
    int i;
    int a;
    for(i=r;i<127;i++)
    {a=1;
        for(int j=2;j<i;j++)
        {  
            if(i%j==0)
            {
                a=0;
                break;
            }
            
        }
        if(a==1)
        {
            return(i);
        }
    }
    
    return(500);
}
int main()
{
    int n;
    cin>>n;
    int r;
    int a,b;
    int l,j;
    
   
    
   
    
    
    
    int i;
    
    for(i=0;i<n;i++)
    { cin>>l;
    

     char *s= new char[l];
     char *ans=new char[l];
  for(int k=0;k<l;k++)
  {
  	cin>>s[k];
	  }	
	for(j=0;j<l;j++)
    {
    
	
    	
        r=s[j];
        
        a=lessprime(r);
    
        	
        b=greaterprime(r);
        	
        if((r-a)>(b-r))
        {
            ans[j]=b;
        }
        
        else if((r-a)<(b-r))
        {
            ans[j]=a;
        }
        else
        {
            ans[j]=a;
        }
        cout<<ans[j];
}
delete(s);
delete(ans);
    }
    
    
    
}
