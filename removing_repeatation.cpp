#include<iostream>
using namespace std;
#include<cstring>
int main() {
    char a[1000];
    cin.getline(a,1000);
    int k,i=0;
    int n=strlen(a);
    int r=0;
    while(a[i]!=NULL)
    {

            while (a[i]==a[i+1])
            {
                for( k=i+1;k<n-r-1;k++)
                {
                
                    a[k]=a[k+1];
                }
                a[k]=NULL;
                r++;
                
                
				 
            }
        
        i++;
    }
    cout<<a;
    
	return 0;
}
