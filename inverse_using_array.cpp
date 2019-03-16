#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[1000],b[1000];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

for(int i=0;i<n;i++)
{
    cin>>b[i];
}
int c[1000];
for(int i=0;i<n;i++)
{
    c[a[i]]=i;
    
}

for(int i=0;i<n;i++)
{
    cout<<c[i];
}
}
