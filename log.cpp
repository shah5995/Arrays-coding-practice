#include<iostream>
using namespace std;
int main() {
    int base;
    int power;
    cin>>base;
    cin>>power;
    int i=0;
    
    while(power!=1)
    {
        i++;
        power=power/base;
    }
    cout<<i;
	return 0;
}
