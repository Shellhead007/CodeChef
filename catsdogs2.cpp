#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 long long	int c,d,l;
		cin>>c>>d>>l;
	
		if((l%4)!=0)
			cout<<"no"<<endl;
		else
		{
		/*	if(c == d)
			{
				
				if(l<=(c*4+d*4) && l>=d*4 && l%4==0)

				{
					cout<<"yes"<<endl;
				}
				else
				{
					cout<<"no"<<endl;
				}
			}*/
			 if(c == d*2 || c<d*2 || c==d)
			{
				
				if(l<=(c*4+d*4) && l>=d*4)
				{
					cout<<"yes"<<endl;
				}
				else
				{
					cout<<"no"<<endl;
				}
			}
			else if(c>d*2)
			{
				
				if(l<=(c*4+d*4) && l>=((c-d)*4))
				{
					cout<<"yes"<<endl;
				}
				else
				{
					cout<<"no"<<endl;
				}
			}
			/*else if(c<d*2)
			{
				
				if(l<=(c*4+d*4)&&l>=d*4)
				{
					cout<<"yes"<<endl;
				}
				else
				{
					cout<<"no"<<endl;
				}
		
			}*/
		}
	
	}
	
	return 0;
}
