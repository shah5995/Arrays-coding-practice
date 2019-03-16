#include<iostream>
using namespace std;
int main() {
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {int k=i;
        int j;
        int sum=0;
        while(k>0)
        {
            j=k%10;
            j=j*j*j;
            sum=sum+j;
            k=k/10;
        }
        if(i==sum)
        {
            cout<<i<<endl;
        }
    }
	return 0;
}
