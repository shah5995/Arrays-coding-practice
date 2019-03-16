#include<iostream>
using namespace std;
int main() { 
    char a;
    a=cin.get();
    
    while((a!='x') && (a!='X'))
    {
    if(a=='+'||a=='-'||a=='*'||a=='/'||a=='%')
        {
            int n1,n2;
            cin>>n1>>n2;
            if(a=='+')
            {
            	cout<<n1+n2;
			}
			
            else if(a=='-')
            {
            	cout<<n1-n2;
			}
			
            else if(a=='/')
            {
            	cout<<n1/n2;
			}
			
           else if(a=='*')
            {
            	cout<<n1*n2;
			}
			else
			{
				cout<<n1%n2;
			}
        }
        else
        {
            cout<<"Invalid operation. Try again.";
        }
        cin.get();
        a=cin.get();
    }
	return 0;
}
