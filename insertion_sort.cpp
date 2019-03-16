#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[10];
	for(int i=1;i<=n;i++)
	{
		cout<<endl<<"enter the member of array";
		cin>>a[i];
		//int r=a[i];
		for(int j=1;j<i;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		cout<<endl<<"sorted ARRAY "<<endl;
			for(int k=1;k<=i;k++)
	{
		cout<<a[k];
	}
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
