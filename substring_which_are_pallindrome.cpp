 #include<iostream>
using namespace std;
#include <cstring>
int c=0;
bool check_pallindrome(char s[])
{
	int n= strlen(s);
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-1-i])
		{
			return(false);
		}
	}
	return(true);
}
int main()
{
	char arr[20];
	
	cin.getline(arr,20);
	
	int len_a=strlen(arr);
	for(int i=0;i<strlen(arr);i++)
	{
		cout<<"subarray with "<<i+1<<" element      ";
		for(int j=0;j<len_a-i;j++)
		{
			int k;
			char s[20];
			for( k=0;k<=i;k++)
			{
				s[k]=arr[j+k];
				
				
			}
			s[k]='\0';
			bool t=check_pallindrome(s);
			if(t)
			{
				c++;
			}
			cout<<s<<" ";
			cout<<"    ";
		}
		cout<<endl<<endl<<endl;
	
		
}
	cout<<"total pallindromic substring are    :"<<c;
}
