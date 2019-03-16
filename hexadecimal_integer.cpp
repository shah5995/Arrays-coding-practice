#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
int htoi(char p)
{
	int a;
	a=p-87;
//	cout<<a;
	return a;
	
}
int convert_hexa_decimal(int a[],int n)
{
	int hexa=0;
	int c=0;
	for(int i=n-1;i>=0;i--)
	{
		hexa=hexa+a[i]*pow(16,c);
		c++;
	}
	return(hexa);
}
int main()
{
	char s[500];
	cin.getline(s,500);
	int i=0;
	int ans[500];
	while(s[i]!='\0')
	{
		if(s[i]>='a'&&s[i]<='f')
		{
			ans[i]=htoi(s[i]);
		}
		else
		{
			ans[i]=s[i]-48;
		}
		i++;
	}
	s[i]='\0';
	for(int j=0;j<strlen(s);j++)
	{
		cout<<ans[j];
	}
	cout<<endl<<endl;
	int hexa=convert_hexa_decimal(ans,strlen(s));
	cout<<"no in decimal form is"<<hexa;
//	cout<<s;
}
