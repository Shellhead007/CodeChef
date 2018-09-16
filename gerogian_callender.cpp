#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,d;
	cin>>t;
	while(t--)
	{
		int y;
		cin>>y;
	     d=0;
	     if(y>2001)
	     {
	     	for(int i=2001;i<y;i++)
	        {
	           if((i%4==0 && i%100!=0) || i%400==0)
	           {
	           	 d = d+2;
			   }
			   else
			   {
			   	d = d+1;
			   }
			}
			  d = (1+d%7)%7;
		}
		else
		{
			for(int i=y;i<2001;i++)
			{
				if((i%4==0 && i%100!=0) || i%400==0)
	           {
	           	 d = d+2;
			   }
			   else
			   {
			   	d = d+1;
			   }
			}
			d  = (8-d%7)%7;
		}
		switch(d)
		{
			
			case 0:cout<<"sunday\n";break;
			case 1:cout<<"monday\n";break;
			case 2:cout<<"tuesday\n";break;
			case 3:cout<<"wednesday\n";break;
			case 4:cout<<"thursday\n";break;
			case 5:cout<<"friday\n";break;
			case 6:cout<<"saturday\n";break;
			default:break;
		
		}
			
		
		
	}
	return 0;
}
