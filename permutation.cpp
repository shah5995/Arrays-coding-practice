#include<iostream>
using namespace std;
void permutate(char s[],int index)
{
	if(s[index]=='\0')
	{
		cout<<s<<endl;
		return;
	}
	for(int j=index;s[j]!='\0';j++)
	{
		swap(s[index],s[j]);
		permutate(s,index+1);
		swap(s[j],s[index]);
	}
	
}
int main()
{
	char s[10]="ABCDE";
	int a=9;
	int b=10;
	
	int index=0;
	permutate(s,index);
	
}
