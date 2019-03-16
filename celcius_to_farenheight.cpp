#include <iostream>
using namespace std;
int main() {
    int min,max,step;
    cin>>min>>max>>step;
  //  int i=(max-min)/step;
    int i=min;
    while(i<=max)
    {
    	cout<<i;
		cout<<" ";
		int f=5*(i-32)/9;
		cout<<f<<endl;
    	i=i+step;
	}
    
}

