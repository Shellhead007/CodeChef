#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,countN=0,countM=0,d;
		cin>>n>>m>>k;
		
		if(n>m)
		{
			 d = n-m;
		}
		else
		{
			d  = m-n
			; 
		}
		if(d>k)
		{
	      cout<<d-k<<endl;		
		}
		else
		{
			cout<<"0"<<endl;
		}
	
	}
	return 0;
}
