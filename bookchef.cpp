#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool desc(pair<int, string> a, pair<int, string> b){
	return a.first>b.first;
}
int main()
{
	int n,m,f,p;
	string s;
	cin>>n>>m;
	vector<int>specfr;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		specfr.push_back(x);
	}
	vector<pair<int,string> >sp;
	vector<pair<int,string> >rem;
	
	for(int i=0;i<m;i++)
	{
		cin>>f>>p>>s;
		if(find(specfr.begin(),specfr.end(),f)!=specfr.end())
		{
			sp.push_back(make_pair(p,s));
		}
		else
		{
			rem.push_back(make_pair(p,s));
		}
		
	}
	  sort(sp.begin(),sp.end(),desc);
	  sort(rem.begin(),rem.end(),desc);
	  
	  for(int i=0;i<sp.size();i++)
	  {
	  	cout<<sp[i].second<<endl;
	  }
	  for(int i=0;i<rem.size();i++)
	  {
	  	cout<<rem[i].second<<endl;
	  }
	  
    
	return 0;
	
}
