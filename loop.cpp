#include<iostream>
using namespace std;
int main()
{  int i,n,j,k=1;
cout<<"enter the no of lines you want in the pattern \n\n";
cin>>n;
for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
	{
		cout<<k<<" ";
		k++;
	}
	cout<<"\n";
	
}
}
