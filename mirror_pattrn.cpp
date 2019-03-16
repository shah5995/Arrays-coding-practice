#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int a=(n+1)/2;
for(int i=1;i<=n;i++)
{
	if(a>=0)
	{
	
	for(int j=1;j<=a;j++)
	{
		cout<<" ";
	}
	a--;
}
     else
          {
          	a++;
          	for(int j=1;j<=a;j++)
          	{
          		cout<<" ";
			  }
             	
        }
	for(int k=1;k<=(2*i-1);k++)
	{
		if(k>=n/2+1)
		{
		
		cout<<" * ";}
		else{
			
		}
		
	}
	cout<<endl;
}


}
