#include<iostream>
using namespace std;
#include<cstring>
int main()
{
char m[50];

cin.getline(m,50);
int n=strlen(m);
cout<<n;
int r;
cout<<"enter no which to rotate";
cin>>r;
for(int i=0;i<r;i++)
{ char ch=m[n-1];
//cout<<ch;
	for(int j=n-1;j>0;j--)
	{
		m[j]=m[j-1];
		
		
	}
	m[0]=ch;
//	cout<<endl<<m;
	
}
cout<<m;
}
