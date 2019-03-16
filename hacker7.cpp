
// Sample code to perform I/O:

#include <iostream>

using namespace std;
#include<cstring>

int main() {
	char s[500];
	cin.get(s,500);
	
//	cout<<s;
cout<<(s[99]);
	for(int i=0;i<strlen(s);i++)
	{
	    if((s[i]>=65)&&(s[i]<=90))
	    {
	        s[i]=s[i]+32;
	    }
	    else
	    {
	        s[i]=s[i]-32;
	    }
	    	cout<<s[i];
	    	
	}
	cout<<strlen(s);

	//cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

