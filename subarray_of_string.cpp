 #include<iostream>
using namespace std;
#include <cstring>
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
			for(int k=0;k<=i;k++)
			{
				cout<<arr[j+k]<<" ";
			}
			cout<<"    ";
		}
		cout<<endl<<endl<<endl;
		
}
}
