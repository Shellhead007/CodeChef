#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s2,s1;
	cin>>s1;
    int t,count;
    cin>>t;
    while(t--)
    {
    	cin>>s2;
    	count=0;
    	for(int i=0;i<s1.size();i++)
    	{
    		for(int j=0;j<s2.size();j++)
    		{
    			if(s2[j]==s1[i])
    			{
    				count++;
				}
			}
		}
		if(count>=s2.size())
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}
