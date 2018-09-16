#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
		short t;	int count;
		cin>>t;
		while(t--)
		{   count = 0;
			string str;
			cin>>str;
			int len = str.length();
			for(int i=0;i<len;i++)
			{
				if(str[i]=='<')
				{
					str[i]='>';
				}
				else if(str[i]=='>')
				{
					str[i]='<';
				}
			}
		;
			for(int i=0;i<len;i++)
			{
				if(str[i]=='>')
				{
					for(int j=i+1;j<i+2;j++)
					{
						if(str[j]=='<')
						{
							count++;
						}
					}
				}
			}
			cout<<count<<endl;
		}
		return 0;
}
