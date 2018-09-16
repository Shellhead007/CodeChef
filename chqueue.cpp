	#include<iostream>
	#define mod 1000000007;
	using namespace std;
	int main()
	{
		long long int n,k,ans=0,fear=1;
		cin>>n>>k;
	
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}	
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
	
				if(arr[i]>arr[j])
				{
					fear = (fear*(j-i+1))%mod;
				}
		 	}
		}
		cout<<fear<<endl;
		return 0;
	}
