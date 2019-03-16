#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
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
int octal_decimal(int n)
{
    int r=1;
    int c=0;
    int ans=0;
    while(n>0)
    {
        ans=ans+n%10*pow(8,c);
        c++;
        n=n/10;
        
    }
    return(ans);
}
void decimal_hexa(int n,char ans3[])
{
	int i=0;
	char temp[15];
	while(n>0)
	{
		int r=n%16;
		if(r>=0&&r<=9)
		{
			temp[i]=r+48;
		}
		else
		{
			temp[i]=55+r;
		}
		n=n/16;
		i++;
		
	}
	temp[i]='\0';
	for(int i=0;i<strlen(temp);i++)
	{
		ans3[i]=temp[strlen(temp)-i-1];
	}
	ans3[i]='\0';
}
int hexa_decimal(int n)
{
	int c=0;
	int r=0;
	while(n>0)
	{
		r=r+n%10*pow(16,c);
		n=n/10;
		c++;
	}
	return(r);
}

int main() {
    int sb,db,sn;
    cin>>sb>>db>>sn;
    if(sb==8)
    {
         int ans=octal_decimal(sn);
        if(db==10)
        {
       
        cout<<ans;
        return(0);
        }
        else if(db==2)
        {
            int ans2=decimal_binary(ans);
            cout<<ans2;
            return 0;
            
        }
        else if(db==16)
        {
        	char ans3[20];
        	decimal_hexa(ans,ans3);
        	cout<<ans3;
        	       return(0);
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
        else if(db==8)
        {
            int ans2=decimal_octal(ans);
            cout<<ans2;
            return(0);
        }
         else if(db==16)
        {
        	char ans3[20];
        	decimal_hexa(ans,ans3);
        	cout<<ans3;
        	       return(0);
		}
    }
    else if(sb==10)
    {
        
        if(db==2)
        {
        	int ans=decimal_binary(sn);
            cout<<ans;
            return(0);
        }
        else if(db==8)
        {
            int ans2=decimal_octal(sn);
            cout<<ans2;
            return(0);
        }
         else if(db==16)
        {
        	char ans3[20];
        	decimal_hexa(sn,ans3);
        	cout<<ans3;
        	       return(0);
		}
    }
    else if(sb==16)
        {
        	int ans=hexa_decimal(sn);
        	if(db==10)
        	{
        		cout<<ans;
			}
			else if(db==8)
			{
				int ans1=decimal_octal(ans);
				cout<<ans1;
			}
			else if(db==2)
			{
				int ans2=decimal_binary(ans);
				cout<<ans2;
				
			}
		}
    //cout<<sn;
	return 0;
}
