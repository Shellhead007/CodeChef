#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		int m,x,y,count=0,house_of_police;
		bool M[101];
		cin>>m>>x>>y;
		int d = x*y;
		for(int i=1;i<101;i++)
		{
			M[i]=true;
		}
		while(m--)
		{
			cin>>house_of_police;
			int s = max(0,house_of_police-d);
			for(int i=s;i<=house_of_police;i++)
			M[i]=false;
			
			s = min(100,house_of_police+d);
			for(int i=house_of_police;i<=s;i++)
			M[i]=false;
		}
		for(int i=1;i<101;i++)
		{
			if(M[i])
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
