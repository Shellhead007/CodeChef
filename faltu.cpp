#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,x,j,k,l,o,m,n;
	cin>>x;
	while(x--)
	{
		cin>>n;
	    k=n;
		m=INT_MAX;
		cout<<m<<endl;
		while(n--)
		{
			cin>>o;
			if(o<m)
		{
				m=o;
			cout<<m<<endl;
		}
	}
		i=m*(n-1);
		cout<<i<<endl;
	}
} 
