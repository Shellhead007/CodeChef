#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		int M,x,y;
		cin>>M>>x>>y;
		int arrM[M];
		for(int i=0;i<M;i++)
		{
			cin>>arrM[i];
		}
		int back[M],front[M];
		int d = x*y;
		for(int i=0;i<M;i++)
		{
			back[i] = arrM[i] - d;
			if(back[i]<=0)
			back[i]=1;
		//	cout<<back[i]<<endl;
			front[i] = arrM[i] +d;
			if(front[i]>=100)
			front[i]=100;
		//	cout<<front[i]<<endl;
		}
		int d1=0;
		for(int i=0;i<M;i++)
		{
		    if(front[i]<=100 && back[i]>=1)
			d1 = d1+(front[i+1] - back[i]);
		}
		cout<<d1<<endl;
		
		
		
		
		
	}
	return 0;
}
