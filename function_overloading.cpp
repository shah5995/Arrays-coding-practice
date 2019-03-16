#include<iostream>
using namespace std;
#include<cstring>
void reverse(int n)
{
	int ans=0;
	while(n>0)
	{
		ans=ans*10+n%10;
		n=n/10;
		
	}
	cout<<ans;
}
void reverse(char s[])
{
	int len=strlen(s);
//	cout<<len;
	char ans[500];
	for(int i=len-1;i>=0;i--)
	{
		ans[len-i-1]=s[i];
		
		
	}
	ans[len+1]='\0';
	cout<<ans;
}
void reverse(int arr[],int n)
{
	int b[500];
	for(int i=0;i<n;i++)
	{
		b[i]=arr[n-i-1];
		cout<<b[i];
	}
}
int main()
{
	int n,no;
	cout<<"Enter any no    :";
	cin>>n;
	cin.get();
	cout<<"Enter any string    :";
	char s[500];
	cin.getline(s,500);
	cout<<"Enter total element you want in array    :";
	cin>>no;
	cout<<"Enter the array   :";
	int arr[500];
	for(int i=0;i<no;i++)
	{
		cin>>arr[i];
	}
	
	reverse(n);
	cout<<endl<<endl;
		reverse(arr,no);
	cout<<endl<<endl;
	reverse(s);

}
