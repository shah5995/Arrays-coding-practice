
// Sample code to perform I/O:

#include <iostream>

using namespace std;
#include<cstring>
#include<string>

int main() {
	char s[100];
	cin.get(s,100);
	int m=0;
	//cout<<s; 
	int l=strlen(s);
	cout<<endl<<l;
	
	// Reading input from STDIN
	for(int i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-i-1])
		{
			m=1;
			break;
			
		}
	 } 
	 if(m==0)
	 {
	 	cout<<"YES";
	 }
	 else
	 {
	 	cout<<"NO";
	 }
	// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

