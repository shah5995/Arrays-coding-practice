#include<iostream>
using namespace std;
#include<cstring>
int main() {
    char a[1000];
    cin.getline(a,1000);
    int i,n=strlen(a);
    for( i=0;i<n;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        
    }
    a[i]='/0';
    cout<<a;
	return 0;
}
