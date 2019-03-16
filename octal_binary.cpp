#include <iostream>
using namespace std;
#include<cmath>
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

int main() {
    int n,c=0;
    cin>>n;
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
	cout<<bin;
    
    
    
}
