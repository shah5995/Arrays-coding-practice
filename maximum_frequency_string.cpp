#include<iostream>
using namespace std;
#include<cstring>
int main() {
    char s[1000];
    int n;
    char ans;
    cin.getline(s,1000);
    n=strlen(s);
    char b[100]={0};
     int c_max=-1000989;
    for(int i=0;i<n;i++)
    {
        int count=1;
       
        for(int k=0;k<=i;k++)
        {
            if(b[k]==s[i])
            {
                break;   
            }
            else
            {
                b[i]=s[i];
                 for(int j=1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
        if(count>c_max)
        {
        	ans=s[i];
            c_max=count;
        }
                
            }
        }
       
        
    }
    cout<<ans<<c_max;
	return 0;
}
