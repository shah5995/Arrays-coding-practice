#include<iostream>
using namespace std;
void getline(char s[])
{
	int i=0;
	s[i]=cin.get(); 
	while(s[i]!='\n')
	{
				i++;
		s[i]=cin.get();

	}
	
}
int main()
{
	char s[500];
	getline(s);
	cout<<s;
	
	
}
