#include<iostream>
using namespace std;
#include<cmath>
int main() {
int t,n;
cin>>t;
for(int test=0;test<t;test++)
{
    cin>>n;
    int a[100000],b[100000],ans[10000]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        
    }
    for(int i=0;i<n;i++)
    {
        int r=a[i];
        int m=r;
        int count=0;
        while(r>0)
        {
            count++;
            r=r/10;
        }
        
       // cout<<count<<endl;
        int p=m%10;
        int c=1;
        while(c!=5-count+1)
        {
            m=m*10+a[i]%10;
            c++;
        }
        b[i]=m;
     //   cout<<b[i]<<endl;
    }
  // cout<<"maximum no formed is    :";
    for(int i=0;i<n;i++)
    {
    	 int max=-98740;
    int pos=0;
    	for(int j=0;j<n;j++)
    	{
    		if(b[j]>max)
    		{
    			max=b[j];
    			pos=j;
			}
		//	cout<<b[j]<<"  ";
		}
		//cout<<endl;
		int temp=a[i];
		ans[i]=a[pos];
		a[pos]=temp;
		b[pos]=0;
		
		cout<<ans[i];
		
	}
	cout<<endl;
}
	return 0;
}
