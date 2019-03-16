#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	int sum=0;
	for(int m=0;m<test;m++)
	{
	    int n;
	    cin>>n;
	    int max=INT_MIN;
	    int a[10000];
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n-i;j++)
	        {
	            sum=0;
	            for(int k=0;k<=i;k++)
	            {
	                sum=sum+a[k+j];
	            }
	            if(sum>max)
	            {
	                max=sum;
	            }
	        }
	    }
	    cout<<max<<endl;
	}
	
}
