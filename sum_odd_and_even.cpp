#include<iostream>
using namespace std;
int main() {
    int i=1;
    int n;
    cin>>n;
    int sum_odd,sum_even;
    sum_odd=sum_even=0;
    while(n>0)
    {
        if(i%2!=0)
        {
            sum_odd=sum_odd+n%10;
        }
        else
        {
           sum_even=sum_even+n%10; 
        }
        n=n/10;
        i++;
    }
    cout<<sum_odd<<endl<<sum_even;
	return 0;
}
