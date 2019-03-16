#include<iostream>
using namespace std;
#include<cstring>
int main()
{
	char s[100];
	cin.get(s,100);
	int l= strlen(s);
	char message[100];
	int i;
	
	int k;
	
	cin>>k;
	int n;
	for(i=0;i<l;i++)
	{
		cout<<s[i]<<endl;
		if(((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z')))
		{
			if(k>26)
			{
				n=k%26;
				if(((s[i]+n)>'Z')||((s[i]+n)>'z'))
				{
					if((s[i]+n)>'Z')
					{
						message[i]=s[i]+k-90+65;
					}
					else
					{
						message[i]=s[i]+k-122+97;
					}
					
				}
				else{cout<<"shah\n";
					message[i]=s[i]+n;
				}
			}
			else{
				 if(((s[i]+k)>'Z')||((s[i]+k)>'z'))
		        {
		        		if((s[i]+n)>'Z')
					{
						message[i]=s[i]+k-90+65;
					}
					else
					{
						message[i]=s[i]+k-122+97;
					}
					
	     	     }
		         else
	    	    {
	   		    message[i]=s[i]+k;
		        }
		
				
			}
			
		}
		else if((s[i]>=0)&&(s[i]<=9))
		{
			if(k>9)
			{
				n=k%10;
				if((s[i]+n)>9)
				{
					message[i]=(s[i]+n)%10;
				}
				else
				{
					s[i]=s[i]+n;
				}
			}
			else
			{
				if((s[i]+k)>9)
				{
					message[i]=(s[i]+k)%10;
				}
				else
				{
					s[i]=s[i]+k;
				}
			}
			
		}
		else
		{
			message[i]=s[i];
		}
		cout<<message[i];
	}
	
}
