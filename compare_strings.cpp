#include<iostream>
using namespace std;
#include<cstring>
int main()
{int m;
cin>>m;
cin.get();
int max=0;
char max_string[50];
for(int i=1;i<=m;i++)
{
	 char a[50];
	 cin.getline(a,50);
	 int n=strlen(a);
	 if(n>max)
	 {
	 	max=n;
	 	int j;
	 	for(j=0;j<max;j++)
	 	{
	 		max_string[j]=a[j];
		 }
		 max_string[j]='\0';

	 }
	 
	
}
cout<<max<<max_string;
}
