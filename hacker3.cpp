
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;	
	 int *a=new int[n];
	long long int p=1;
	int i;
	for(i=0;i<n;i++)
	{
	    cin >> a[i];
	    p=p*a[i];
	    cout<<p;
	}
	
	cout<<p;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here

