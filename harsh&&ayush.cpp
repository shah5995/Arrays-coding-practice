#include<iostream>
using namespace std;
int main() {int n,m;
int test;
cin>>test;
   
    for(int a=0;a<test;a++)
    {
    	 cin>>m>>n;
        int sum1,sum2;
        sum1=sum2=0;
        for(int i=1;i<m+n;i++)
        {
          if(i%2!=0)
          {
              sum1=sum1+i;
              m=m-sum1;
          }  
          else
          {
              sum2=sum2+i;
              n=n-sum2;
          }
          
          if(m<=0)
          {
              cout<<"Harshit"<<endl;
              break;
          }
          else if(n<=0)
          {
              cout<<"Aayush"<<endl;
              break;
          }
        }
        
    }
	return 0;
}
