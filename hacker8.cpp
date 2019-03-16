
// Sample code to perform I/O:

#include <iostream>

using namespace std;
#include<cstring>
#include<string>

int main() {
	int num,a;
	cin >> num;	
	char m[25];
	cin.get(m,25);									// Reading input from STDIN
	for(int i=0;i<num;i++)
	{
	    char s[100];
	    
	    cin.get(s,100);
	    cout<<"entr r";
	    char r[100];
	    cin.get(r,100);
	    int l1=strlen(s);
	    int l2=strlen(r);
	    for(int j=0;j<l1;j++)
	    {a=0;
	        for(int k=0;k<l2;k++)
	        {
	            if(s[j]==s[k])
	            {
	                a=1;
	            }
	        }
	        if(a==0)
	        {
	            cout<<"N0"<<endl;
	            break;
	        }
	    }
	    
	    if(a==1){
	    cout<<"YES"<<endl;
	    }
	}// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
//*/

// Write your code here

