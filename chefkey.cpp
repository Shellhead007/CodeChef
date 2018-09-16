#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int  n,m,c,z=0;
	    
		    cin>>n>>m>>c;
	  
				for(int i=1;i<=n;i++)
			{
				if( ((c%i)==0) && ((c/i)<=m) )
				{
					z++;
				}
	     	}
			
			
			cout<<z<<endl;
		
		 }   
		return 0;
}
