#include<iostream>
using namespace std;
# include<cstring>
int main()
{char a;
a=cin.get();
char r=a;
int w=0;
int c=0;
int n=1;
int l=0;
int sc=1;
int wc=1;
while(a!='$')
{
	if(n==1&&(a==' '||a=='\t'||a=='\n'))
	{
		if(a=='\n')
		{
			l++;
		}
		
		a=cin.get();
		if(a=='$')
		{
			cout<<"0 \n 0";
			return(0);
		}
		while(a==' '||a=='\t'||a=='\n')
		{
				if(a=='\n')
		{
			l++;
		}
			a=cin.get();
				if(a=='$')
		{
			cout<<"0"<<endl<<"0";
			return(0);
		}
		}
		n--;
			wc=1;w++;
	}
	
	
	
	 if(a=='\t'||a==' '||a=='\n')
	{
	/*	if(a=='\t'||a==' ')
		{
			sc=0;
		}
		if(a='\n'&&sc==0)
		{
			l++;
		}
	*/	if(a=='\n')
			{
				l++;
			}
		if(wc!=0)
		{
			
		
			
			{
				w++;wc=0;
			}
			
		}
	}
	else
	{
		wc=1;
		sc=1;
	}
	a=cin.get();
	n=0;
}
if(r=='\n')
{
cout<<w<<endl<<l;

}
else
{

cout<<++w<<endl<<++l;
}
}
