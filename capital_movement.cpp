#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
	
	int t,n;
	int start1,end1,indexMax1,cp;
	
	cin>>t;
	
	while(t--)
	{
		
		cin>>n;
		vector< vector<int> > arr(n);
		map<int,int> mymap;
		
		for(int i=0;i<n;i++){
			cin>>cp;
			mymap.insert(make_pair(cp,i));
		}
		
		for(int i=0;i<n-1;i++){
			cin>>start1>>end1;
			
			arr[start1-1].push_back(end1-1);
			arr[end1-1].push_back(start1-1);
			
		}
		
		map<int,int>::reverse_iterator it;
		vector<int>::iterator it1;		
		
		for(int i=0;i<n;i++){
						
			indexMax1=-1;
			
			for(it=mymap.rbegin();it!=mymap.rend();it++){
				
				it1=find(arr[i].begin(),arr[i].end(),it->second);
				
				if(it1==arr[i].end() && it->second!=i){
					indexMax1=it->second;
					break;
				}
				
			}
			
			cout<<indexMax1+1<<" ";
			
		}
		
		cout<<endl;
		
	}
	
	return 0;
}
