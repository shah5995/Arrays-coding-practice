#include<iostream>
using namespace std;
int main() { 
    char a;
    a=cin.get();
    while((a!='x')||(a!='X'))
    {
    if((a=='+')||(a=='-')||(a=='*')||(a=='/')||(a=='%'))
        {
            int n1,n2;
            cin>>n1>>n2;
            cout<<"the answer is";
            if(a=='+')
            {
            	cout<<n1+n2<<endl;
			}
			
            else if(a=='-')
            {
            	cout<<n1-n2<<endl;
			}
			
            else if(a=='/')
            {
            	cout<<n1/n2<<endl;
			}
			
           else if(a=='*')
            {
            	cout<<n1*n2<<endl;
			}
			else
			{
				cout<<n1%n2<<endl;
			}
        }
else
{
cout<<"Invalid input try again"<<endl;

}
        
        cin>>a;
    }
	return 0;
}
