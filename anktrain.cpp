#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int c=0;
		int d = n/8;
		int r = n - 8*d;
		if(r==1)
		{
		   if(n>8)
		   {
		   	r=4;c=r+8*d;cout<<c<<"LB"<<endl;
		   }
		   else
		   {
		   	cout<<"4LB"<<endl;
		   }
		   
		}	
	else	if(r==2)
		{
			if(n>8)
			{
				r=5;c=r+8*d;cout<<c<<"MB"<<endl;
			}
			else
			{
				cout<<"5MB"<<endl;
			}
		}
	else	if(r==3)
		{
			if(n>8)
			{
				r=6;c=r+8*d;cout<<c<<"UB"<<endl;
			}
			else
			{
				cout<<"6UB"<<endl; 
			}
		}
	else	if(r==4)
		{
			if(n>8)
			{
				r=1;c=r+8*d;cout<<c<<"LB"<<endl;
			}
			else
			{
				cout<<"1LB"<<endl; 
			}
		}
		else if(r==5)
		{
			if(n>8)
			{
				r=2;c=r+8*d;cout<<c<<"MB"<<endl;
			}
			else
			{
				cout<<"2MB"<<endl; 
			}
		}
	else	if(r==6)
		{
			if(n>8)
			{
				r=3;c=r+8*d;cout<<c<<"UB"<<endl;
			}
			else
			{
				cout<<"3UB"<<endl; 
			}
		}
	else	if(r==7)
		{
			if(n>8)
			{
				r=r+8*d+1;cout<<r<<"SU"<<endl;
			}
			else
			{
				cout<<"8SU"<<endl;
			}
		}
	else	if(r==0)
		{
			if(n>8)
			{
				n = n-1;cout<<n<<"SL"<<endl;
			}
			else
			{
				cout<<"7SL"<<endl;
			}
		}
		
	}
	return 0;
}
