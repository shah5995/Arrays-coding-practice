#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int no;
    cin>>no;
    int start=0;
	int end=n-1;
    while(start<=end)
    {
    	int avg=(start+end)/2;
    	if(a[avg]==no)
		{
			cout<<avg<<"    found";
			return 0;
		}
    	else if(no>a[avg])
    	{
    		start=avg+1;
		}
		else 
		{
			end=avg-1;
		}
		
    	
    	
	}
	cout<<"not found";
	
	return 0;
}
