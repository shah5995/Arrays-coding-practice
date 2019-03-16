#include<iostream>
using namespace std;
#include<cstring>
int main()
{
char m[50];

cin.getline(m,50);
int len_m = strlen(m);
char n[50];
cin.getline(n,50);
int len_n = strlen(n);
if(len_m == len_n)
{
	for(int i=0;i<len_m;i++)
	{
		int a=0;
		char ch=m[i];
		for(int j=0;j<len_n;j++)
		{
			if(ch==n[j])
			{
				a=1;break;
			}
		}
		if(a==0)
		{
			cout<<"NOT permutation";
			return(0);
		}
	}
	
	{
		cout<<"it is";
	}
	
}
else{
	cout<<"NOT A PERMUTATION";
}


}
