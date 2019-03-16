
#include<iostream>
using namespace std;
int main(){
char a[100][100];
int m;
cin>>m;
/*for(int i=0;i<m;i++)
{
	for(int j=0;j<m;j++)
	{
		a[i][j]='0';
		cout<<a[i][j];
	}
	cout<<endl;
}*/
char ch;
int b=0;
int count=0;
while(count<=m*m)
{
	if(b%2==0)
	{
		ch='0';
		count++;
	}
	else
	{
		ch='*';
		count++;
	}
	
	for(int i=b,j=b;j<m-b;j++ )
	{
		a[i][j]=ch;
		count++;
	}
	for(int i=b+1,j=m-b-1;i<m-b;i++)
	{
		a[i][j]=ch;
		count++;
	}
	for(int j=m-b-1,i=m-b-1;j>=b;j--)
	{
		a[i][j]=ch;
		count++;
	}
	for(int i=m-b-2,j=b;i>b;i--)
	{
		a[i][j]=ch;
		count++;
	}
	b++;
}

for(int i=0;i<m;i++)
{
	for(int j=0;j<m;j++)
	{
//		a[i][j]='0';
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}
}

