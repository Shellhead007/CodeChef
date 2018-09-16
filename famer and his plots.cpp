#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
    	int n,m;
    	cin>>n>>m;
    	
    	int a = n*m;
    	int div = __gcd(n,m);
    	
    	
    	cout<<a/(div*div)<<endl;
	}
	return 0;
}
