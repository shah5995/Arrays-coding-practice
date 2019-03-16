#include<iostream>
using namespace std;
#include<cstring>
int main()
{
char m[50];

cin.getline(m,50);
int n=strlen(m);
//cin.get();
cout<<m;


for(int i=0;i<n/2;i++)
{
	char temp=m[i];
	m[i]=m[n-i-1];
	m[n-i-1]=temp;
	
}

cout<<m;
}
