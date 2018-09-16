#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n1,m1;
		cin>>n1>>m1;
	    
		int d = n1*m1;
		if(d%2==0)
		{
			cout<<"Yes"<<endl;
			}	
			else
			{
				cout<<"No"<<endl;
			}
		
	}
	return 0;
}
