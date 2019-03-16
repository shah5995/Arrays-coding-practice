#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int iteration;
    cin>>iteration;
    int b[100000];
    b[]=a[];
    int sum=0;
    for(int i=0;i<iteration;i++)
    {
    
        int q;
        cin>>q;
        for(int j=0;j<n;j++)
        {
            if(j-q<0)
            {
                b[j]=a[j]+a[n-q];
            }
            else{
                b[j]=a[j]+a[j-q];
            }
          if(i==iteration-1)
		  {
			  sum=sum+b[j];
}        }
        cout<<endl;
        	for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    }
    /*int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }*/
    cout<<sum;
	return 0;
}
