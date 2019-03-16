
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;
	int i;
	char ch;
	int seat;
	for(i=0;i<num;i++)
	{
	    cin>>seat;
	    int a=seat/12;
	    int r=seat%12;
	    if(r%3==2)
	    {
	        cout<<"ms";
	    }
	    else if(r%6==0||r%6==1)
	    {
	    	
	        cout<<"ws";
	    }
	    else
	    {
	    	
	    	cout<<"as";
		}
	if(r==0)
	{
		a=a-1;
		r=1;
	}
	else	if(r>6)
		{
			r=r-2*(r%6)+1;
		}
		else if(r<6)
		{
			r=r+2*(6-r)+1;
		}
		else
		{
			r=r+1;
		}
		
		{
		
		cout<<12*a+r<<endl;
	}
		
		
		
		
		
	}// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

