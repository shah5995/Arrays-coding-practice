#include<iostream>
using namespace std ;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int i=0,j=0,k=0;
	while(i<n && j<n && k<n)
	{
		if(arr[i]==0)
		{
			int t = arr[i];
			arr[i]   = arr[j];
			arr[j] = t ;
			j++ ;
			k++;
		}
		
		if(arr[i]==1)
		{
			int t = arr[j];
			arr[j]   = arr[k];
			arr[k] = t ;
			k++ ;
		}
		i++;
	}
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	return 0 ;
}
