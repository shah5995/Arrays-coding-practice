#include<iostream>
using namespace std;
int first_check(int a[],int n,int index)
{
	if (index==n)
	{
	   return (-1);
	
	}	
	if(a[index]==7)
	{
		return index;
	}
	else
	{
	int m=	first_check(a,n,index+1);
		return m;
	}
}

int last_check(int a[],int n,int index)
{
	if (index==-1)
	{
	   return (-1);
	
	}	
	if(a[index]==7)
	{
		return index;
	}
	else
	{
	int m=	last_check(a,n,index-1);
	
	return m;}
}
int p=-1;
int last_check2(int a[],int n,int index)
{
	
	if (index==n)
	{
		if(p==-1)
		{
			return (-1);
		}
	   else
	   {
	   	return p;
	   }
	
	}	
	if(a[index]==7)
	{
		p=index;
	}
	
	int m=	last_check2(a,n,index+1);
	
	return m;
}
void all_index(int a[],int n,int index)
{
	if(index==n)
	{
		return;
	}
	if(a[index]==7)
	{
		cout<<index<<" ";
		
	}
	all_index(a,n,index+1);
	
}
void all_index2(int a[],int n,int index)
{
	if(index==n)
	{
		return;
	}
	
		all_index2(a,n,index+1);
			if(a[index]==7)
	{
		cout<<index<<" ";
		
	}
	return ;

//	all_index(a,n,index+1);
	
}
int main()
{
	int n,a[30];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int index=0;
	int index2=n-1;
	int  ans=first_check(a,n,index);
	cout<<ans<<endl;
		  ans=last_check(a,n,index2);
	cout<<ans<<endl;
	 ans=last_check2(a,n,index);
	cout<<ans;
		all_index(a,n,index);
		cout<<endl;
		all_index2(a,n,index);
}
