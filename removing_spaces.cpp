#include<iostream>
using namespace std;
void squeeze(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			int j=i;
			while(s[j]!='\0')
			{
				s[j]=s[j+1];
				j++;
			}
			s[j]='\0';
		}
		i++;
	//	cout<<s[i];
	}
}
int main()
{
	char s[500];
	cin.getline(s,500);
	squeeze(s);
	cout<<s;
}
