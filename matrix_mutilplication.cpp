#include<iostream>
using namespace std;
void multi(int a[][10],int b[][10],int c[][10],int m,int n,int p,int q)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			c[i][j]=0;
			for(int k=0;k<n;k++)
			{
			c[i][j]=c[i][j]+a[i][k]*b[k][j];	
			}
			
		}
		
	}
		for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			cout<<c[i][j]<<" ";
			
		}
		cout<<endl;
		
	}
	
}
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int m,n,p,q;
	cin>>m>>n;
	cout<<"enter the size of 2nd matrix";
    cin>>p>>q;
    cout<<"enter the first matrix :";
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"enter the 2nd matrix :";
    for(int i=0;i<p;i++)
    {
    	for(int j=0;j<q;j++)
    	{
    		cin>>b[i][j];
		}
	}
	 for(int i=0;i<p;i++)
    {
    	for(int j=0;j<q;j++)
    	{
    		cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	if(n==p)
	{
		cout<<"matrix can be multiplied \n\n";
		multi(a,b,c,m,n,p,q);
	}
	else{
		cout<<"multiplication not possible";
	}

}
