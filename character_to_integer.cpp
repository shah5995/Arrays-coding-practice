#include<iostream>
using namespace std;
int main()
{
	char s[500];
	cin.getline(s,500);
	int a=0;
	int i=0;
	while(s[i]!='\0')
	{
		int r=s[i]-48;
		a=a*10+r;
		i++;
	}
	cout<<a;
}
