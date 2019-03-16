#include<iostream>
using namespace std;
#include<cmath>
int convert_octal_decimal(int n)
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
int main()
{
	int n;
	cin>>n;
	int ans=convert_octal_decimal(n);
	cout<<ans;
}

