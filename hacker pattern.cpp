
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;										// Reading input from STDIN
//	cout << "Input number is " << num << endl;		// Writing output to STDOUT
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n/2;j++)
       {
           //if(j%2==0)
           {
               cout<<"*";
           }
           //else
           {
          // 	cout<<" ";
		   }
           for(int k=0;k<n-1;k++)
           {
               cout<<" ";
           }
           //if(j%2==0)
           {
               cout<<"*\n";
           }
           //else {
           //	cout<<" \n";
		 //  }
           
       }
       for(int l=0;l<=n;l++)
       {
           cout<<"*";
       }
       cout<<"\n";
       
    }for(int j=1;j<=n/2;j++)
       {
          // if(j%2==0)
           {
               cout<<"*";
           }
            //else {
           //	cout<<" ";
		   //}
           for(int k=0;k<n-1;k++)
           {
               cout<<" ";
           }
          // if(j%2==0)
           {
               cout<<"*";
           }/* else {
           	cout<<" ";
		   }*/
           cout<<endl;
       }
    
    
    
    
    
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here

