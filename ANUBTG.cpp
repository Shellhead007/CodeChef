#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		
		
		 long int ans=0;
		for(int i=n-1;i>=0;i=i-4)
		{ 
		 if(i==0)
		 {
		 	ans = ans+a[i];
		 }
		 else
		 {
		 
	        ans = ans+a[i]+a[i-1];		
		 }
	    }   
		cout<<ans<<endl;
	}
	return 0;
}
