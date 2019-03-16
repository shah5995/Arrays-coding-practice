#include <iostream>
#include<cstring>
using namespace std;

int main() {
int r=1;
int k=4;
int m;
if((r>=0)&&(r<=9))
        {
            
            if((r+k%10)>9)
            {
                m=r+(k%10)-10;
                
            }
            else
            {
                m=r+k%10;
                
            }
        }
cout<<m;

}
