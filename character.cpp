#include<iostream>
using namespace std;
int main()
{
char a[20];
char b[20];
cin.getline(a,40);
cin.getline(b,20);
int i=0;
int j=0;
while(a[i]!=NULL)
{
	i++;
}

while(b[j]!=NULL)
{
	j++;
}
int k=0;
while(k!=j)
{
	a[i]=b[k];
	k++;
	i++;
}
a[i]='\0';
cout<<a;
}
