
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	int a[num];
	int max,sum=0;
	max=-20000;
	
	for(int i=1;i<=num;i++)
	{
	    cin>>a[i];
	    
	}
	int r;
	
	for(int i=1;i<=num;i++)
	{r=0;
	sum=0;
	int c=1;
	for(int j=i;j+r<=num;j=j+r)
	{
	   
	    for(int k=0;k<=r;k++)
	    {
	        sum=sum+a[c];
	        c++;
	    }
	    r++;
	    
	}
	cout<<sum<<endl;
	if(sum>max)
{
	max=sum;
		}
			    
	}
	cout<<max;
	
	
	
	
	
	// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here

