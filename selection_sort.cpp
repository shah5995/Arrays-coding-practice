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
for(int i=0;i<n;i++)
{
 int r=INT_MAX;
 int in,temp;
 for(int j=i;j<n;j++)
 {
 	if(arr[j]<r)
 	{
 		r=arr[j];
 		in=j;
	 }
 }
 temp=arr[i];
 arr[i]=arr[in];
 arr[in]=temp;
}


cout<<"sorted array is:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}



}
