#include<iostream>
using namespace std;
int main()
{
	int arr[20];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			if(arr[j-1]>arr[j])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}cout<<"sorted array is:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
