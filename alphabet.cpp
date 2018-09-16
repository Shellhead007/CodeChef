#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s2,s1;
	cin>>s1;
	int t,ascii[26] = {0};
	for(int i=0;s1[i];i++)
	{
		ascii[s1[i]-97]=1;
		
	}
	cin>>t;
	while(t--)
	{
		cin>>s2;
		int count=0;
		int len = s2.size();
		for(int i=0;i<len;i++)
		{
			if(ascii[s2[i]-97]==1)
			{
				count++;
			}
		}
		if(count==s2.size())
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
