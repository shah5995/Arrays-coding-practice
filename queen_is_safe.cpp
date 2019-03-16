#include<iostream>
using namespace std;
bool check_right(int a[][10],int n,int i,int j)
{
	if(j+1==n)
	{
		return true;
	}
	if(a[i][j+1]==1)
	{
		return false;
	}
	else
	return true;
}
bool check_left(int a[][10],int n,int i,int j)
{
	if(j-1<0)
	{
		return true;
	}
	if(a[i][j-1]==1)
	{
		return false;
	}
	else
	return true;
}
bool check_top(int a[][10],int n,int i,int j)
{
	if(i-1<0)
	{
		return true;
	}
	if(a[i-1][j]==1)
	{
		return false;
	}
	else
	return true;
}
bool check_bottom(int a[][10],int n,int i,int j)
{
	if(i+1==n)
	{
		return true;
	}
	if(a[i+1][j]==1)
	{
		return false;
	}
	else
	return true;
}
bool check_top_left(int a[][10],int n,int i,int j)
{
	if((i-1)<0 || (j-1)<0)
	{
		return true;
	}
	if(a[i-1][j-1]==1)
	{
		return false;
	}
	else
	return true;
}
bool check_top_right(int a[][10],int n,int i,int j)
{
	if((i-1)<0 || (j+1)==n)
	{
		return true;
	}
	if(a[i-1][j+1]==1)
	{
		return false;
	}
	else
	return true;
}
bool check_bottom_left(int a[][10],int n,int i,int j)
{
	if((i+1)==n || (j-1)<0)
	{
		return true;
	}
	if(a[i+1][j-1]==1)
	{
		return false;
	}
	else
	return true;
}
bool check_bottom_right(int a[][10],int n,int i,int j)
{
	if((i+1)==n || (j+1)==0)
	{
		return true;
	}
	if(a[i-1][j-1]==1)
	{
		return false;
	}
	else
	return true;
}






int main()
{
	int n;
	cin>>n;
	int a[10][10];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==1)
			{
					bool r=check_right(a,n,i,j);
			bool l=check_left(a,n,i,j);
			bool t=check_top(a,n,i,j);
			bool b=check_bottom(a,n,i,j);
			bool tl=check_top_left(a,n,i,j);
			bool tr=check_top_right(a,n,i,j);
			bool bl=check_bottom_left(a,n,i,j);
			bool br=check_bottom_right(a,n,i,j);
			if(!r||!l||!t||!b||!tl||!tr||!bl||!br)
			{
				cout<<"false";
				return 0;
			}
				
			}
		
		}
	}
	cout<<"true";
}
