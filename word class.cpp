#include<iostream>
using namespace std;
# include<cstring>
int main()
{char a;
a = cin.get();
int l=0;
int w=0;
int wc=0;


while(a!='$')
{
	if(a==' ' || a=='\t')
	{
		if(wc>0)
		{
			w++;
			wc=0;
			
		}
	}
	else if(a=='\n')
	{
		l++;
		if(wc>0)
		{
			w++;
			wc=0;
		}
	}
	else
	{
		wc++;
	}
	a=cin.get();
}
if(wc>0)
{w++;
}
cout<<l+1<<endl;
cout<<w;
}
