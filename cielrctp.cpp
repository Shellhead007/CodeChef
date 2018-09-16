#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int p1;
		cin>>p1;
	    
		int s1 = p1/2048;
			p1= p1%2048;
			while(p1!=0)
			{
				s1 = s1+p1%2;
				p1 = p1/2;
			}
			
			cout<<s1<<endl;
	}
	
	return 0;
}
