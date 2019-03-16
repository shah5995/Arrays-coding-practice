#include<iostream>
using namespace std;
#include<cmath>
int decimal_binary(int n)
{
    	int count=0;
	
	int rem=0;
	while(n%2==0)
	{
		count++;
		n=n/2;
	}
	while(n>0)
	{
			rem=rem*10+n%2;
			
	
	n=n/2;
		
		
	}
	return(rem*pow(10,count));
}
int binary_decimal(int n)
{
    int i=1;
    
    int deci=0;
    while(n>0)
    {
    	int r=1;
    	for(int k=1;k<i;k++)
    	{
    		r=r*2;
		}
		deci=deci+r*(n%10);
		n=n/10;
		i++;
		
		
	}
    return(deci);
}
int decimal_octal(int deci)
{
     int i=1;int octal;
    
    int n=0;
    octal=0;
    while(deci>0)
    {
    	n=n*10+deci%8;
    	deci=deci/8;
	}
	
	while(n>0)
	{
		octal=octal*10+n%10;
		n=n/10;
	}
	return(octal);
}
int convert(int n)
{
	int count=0;
	int r=n;
	int rem=0;
	while(r%2==0)
	{
		count++;
		r=r/2;
	}
	while(n>0)
	{
			rem=rem*10+n%2;
			
	
	n=n/2;
		
		
	}
	
	return(rem*pow(10,count));

}
int octal_binary(int n)
{
     int c=0;

    int bin=0;
    int r=0;
    int rem=0;
    while(n>0)
    {
    	
    	r=r+convert(n%10)*pow(1000,c);
    	c++;
    	
    	n=n/10;
	}
	bin=r;
	return(bin);
    
}

int main() {
    int sb,db,sn;
    cin>>sb>>db>>sn;
    if(sb==8)
    {
         int ans=octal_binary(sn);
        if(db==2)
        {
       
        cout<<ans;
        return(0);
        }
        else
        {
            int ans2=binary_decimal(ans);
            cout<<ans2;
            return 0;
            
        }
    }
    else if(sb==2)
    {
        int ans=binary_decimal(sn);
        if(db==10)
        {
            cout<<ans;
            return(0);
        }
        else
        {
            int ans2=decimal_octal(ans);
            cout<<ans2;
            return(0);
        }
    }
    else if(sb==10)
    {
        int ans=decimal_binary(sn);
        if(db==2)
        {
            cout<<ans;
            return(0);
        }
        else
        {
            int ans2=decimal_octal(sn);
            cout<<ans2;
            return(0);
        }
    }
	return 0;
}
