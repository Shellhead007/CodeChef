#include<bits/stdc++.h>
using namespace std;
int ncr(int n,int r)
{
	if(r==0)
	{
		return 1;
	}
	if(r>n)
	return 0;
	
	return ncr(n-1,r-1)+ncr(n-1,r);
	
}
int main()
{
	int t,ans;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		ans=0;
		int arr[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
			}
		}
		int collision;
		for(int j=0;j<m;j++)
		{
		 collision = 0;
		for(int i=0;i<n;i++)
		{
			if(arr[i][j]==1)
			collision++;
		}
		if(collision>1)
		{
			ans = ans+ncr(collision,2);
		}
	}
	cout<<ans<<endl;
	}
	return 0;
}
