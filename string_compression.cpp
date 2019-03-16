#include<iostream>
using namespace std;
#include<cstring>
int main() {
    char a[1000];
    cin.getline(a,1000);
    int i,n=strlen(a);
    cout<<a[i];
    int c=1;
    for( i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            c++;
        }
        else
        {
        	if(c==1)
        	{
        	cout<<a[i];	
			}
			else
			{
			
            cout<<c;
            cout<<a[i];}
            c=1;
        }
	
}
if(c!=1)
{
	cout<<c;
}

return 0;
}
