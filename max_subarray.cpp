#include<iostream>
using namespace std;
int main() {
    int test;
    cin>>test;
    for(int m=0;m<test;m++)
    {
        int n;
        cin>>n;
        int a[100000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max=-10000;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+a[j];
                if(sum>max)
                {
                    max=sum;
                }
            }
        }
        cout<<max<<endl;
        
        
    }
	return 0;
}
