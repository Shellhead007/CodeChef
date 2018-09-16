#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int i,q;
	long long int g,n;
	while(t--)
	{
		cin>>g;
		while(g--)
		{
			cin>>i>>n>>q;
			if(n%2==0)
			cout<<n/2<<endl;
			else
			{
				if(i==q)
				cout<<n/2<<endl;
				else
				cout<<n/2+1<<endl;
			}
		}
	}
} 
