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
		string s;
		cin>>s;
		
		int s1 = s.find("010");
		int s2 = s.find("101");
		
		if(s1<s.length() || s2<s.length())
		cout<<"GOOD"<<endl;
		else
		cout<<"BAD"<<endl;
		
	}
	return 0;
}
