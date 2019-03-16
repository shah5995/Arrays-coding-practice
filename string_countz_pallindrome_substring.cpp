#include<iostream>
using namespace std;
#include<cstring>
int main() {
    char s[1000];
    int r=1;
    char arr[100];
    cin.getline(s,1000);
    int len=strlen(s);
    int count=len;
    
    for(int i=1;i<len;i++)
    {
        for(int j=0;j<len-i;j++)
        {
            r=1;
            for(int k=0;k<=i;k++)
            {
                arr[k]=s[k+j];
            }
            for(int k=0;k<=i/2;k++)
            {
                if(arr[k]!=arr[i-k])
                {
                    r=0;
                    break;
                }
            }
            if(r==1)
            {
                count++;
            }
        }
    }
    cout<<count;
	return 0;
}
