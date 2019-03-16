
// Sample code to perform I/O:

#include <iostream>
#include<cstring>
using namespace std;

int main() {
	char s[100];
	cin.get(s,100);										// Reading input from STDIN
	int t= strlen(s);
	int k;
	cin>>k;
	char m[100];
	int i;// Writing output to STDOUT
    for(i=0;i<t;i++)
    {
        if((s[i]>='a')&&(s[i]<='z'))
        {
            if((s[i]+k%26)>'z')
            {
                m[i]=s[i]+k%26+96-122;
            }
            else
            {
                m[i]=s[i]+k%26;
            }
            
        }
        else if((s[i]>='A')&&(s[i]<='Z'))
        {
            
            if((s[i]+k%26)>'Z')
            {
                m[i]=s[i]+k%26+64-90;
            }
            else
            {
                m[i]=s[i]+k%26;
            }
            
            
        }
        else if((s[i]>='0')&&(s[i]<='9'))
        {
            
            if((s[i]+k%10)<='9')
            {
               
                 m[i]=s[i]+k%10;
                
            }
            else{
                 m[i]=s[i]+k%10-10;
            }
        }
        else
        {
            m[i]=s[i];
        }
        cout<<m[i];
    }
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here

