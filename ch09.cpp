#include<bits/stdc++.h>
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
		int counta=0,countb=0;
		int len = s.size();
		for(int i=0;i<len;i++)
		{
			if(s[i]=='a')
			counta++;
			else
			countb++;
		}
		//cout<<counta<<endl;
		//cout<<countb<<endl;
	    if(counta>countb)
	    {
	    	
	    	cout<<countb<<endl;
		}
		else
		{
			cout<<counta<<endl;
		}
	}
	return 0;
}
