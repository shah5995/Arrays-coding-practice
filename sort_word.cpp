#include<iostream>
using namespace std;
#include<cstring>
int main()
{
	char s[10][100];
	cout<<"enter no of array you want to compare";
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin.getline(s[i],100);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
	            int k=0;	
				while(s[j][k]!='\0'&& s[j+1][k]==s[j][k])
				{
					k++;}
					if(s[j+1][k]<s[j][k])//swap
					{
						char temp[100];
						int p;
						for( p=0;s[j][p]!='\0';p++)
						{
							temp[p]=s[j][p];
						}
						temp[p]='\0';
						for( p=0;s[j+1][p]!='\0';p++)
						{
						
						s[j][p]=s[j+1][p];
						}
						s[j][p]='\0';
						for( p=0;temp[p]!='\0';p++)
						{
						
						s[j+1][p]=temp[p];
						}	
						s[j+1][p]='\0';
					
					
				}
				
				
			
		}
	}
	cout<<endl<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}
	
}
