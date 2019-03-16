#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
long long f=1;
for(int i=1;n>=i;i++)
{
	f=f*i;
	
}
cout<<f<<endl;
int t,c=0;
while(f>0)
{
	t=f%10;
	
	if(t!=0)
	{
		break;
		
	}
	f=f/10;
	c++;
	
}
cout<<c;


}
