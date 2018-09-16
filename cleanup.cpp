#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
     
    while(t--)
    {
    	int n,m;
    	cin>>n>>m;
    	
    	vector<int>j(10000),ans;
    	for(int i=0;i<m;i++)
    	{
    		int jobs;
    		cin>>jobs;
    		j[jobs] = 1;
    	}
    	for(int i=1;i<=n;i++)
    	{
    		if(!j[i])
    		{
    			ans.push_back(i);
			}
		}
		
		for(int i=0;i<ans.size();i+=2)
		{
				cout<<ans[i]<<" ";
		}
		 cout<<endl;
		
		for(int i=1;i<ans.size();i+=2)
		{
				cout<<ans[i]<<" ";
		}
		cout<<endl;
    	
	}
	return 0;
}
