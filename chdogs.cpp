#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 long long int s,v;
		 double ans;
       	cin>>s>>v;
		 
		 
		 ans = (double)(2*s)/(3*v);
		
	printf("%.7f\n",ans);
	}
	return 0;
}
