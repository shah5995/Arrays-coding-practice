#include<iostream>
using namespace std;
#include<cstring>
void reverse(char s[])
{
	int i,len=strlen(s);
//	cout<<len;
	char ans[500];
	for(i=0;i<len;i++)
	{
	//	cout<<"shah";
		ans[i]=s[len-i-1];
		
		
	}
	ans[i]='\0';
	cout<<ans;
}
int main()
{cout<<"Enter any string    :";
	char s[500];
	cin.getline(s,500);
		cout<<endl<<endl;
	reverse(s);
	}
