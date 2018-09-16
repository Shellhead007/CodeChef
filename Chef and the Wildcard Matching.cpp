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
		string x1,y1;
		cin>>x1;
		cin>>y1;
		 int len1 = x1.size();
		 int f=0;
		 for(int i=0;i<len1;i++)
		 {
		 	if(x1[i]=='?'|| y1[i]=='?')
		 	{
		 		f = 1;
			 }
			 else if(x1[i]==y1[i])
			 {
			 	f=1;
			 }
			 else
			 {
			 	f=0;
			 	break;
			 }
		 }
		 
		 if(f==1)
		 {
		 	cout<<"Yes"<<endl;
		 }
		 else
		 cout<<"No"<<endl;
		 
	}
	return 0;
}
