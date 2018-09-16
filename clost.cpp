#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr1[k],arr2[k];
		int arr[n];
		
		for(int i=0;i<n;i++)
		arr[i]=1;
		
		for(int i=0;i<k;i++)
		{
			cin>>arr1[i]>>arr2[i];
		}
		
		int a,b,o,c;
		for(int i=0;i<k;i++)
		{
			a = arr1[i];
			b = arr2[i];
			
			arr[a] = 0;
			arr[b] = 1;
			
			o = 1;
			c = 0;
			
			for(int j=a+1;j<b;j++)
			{
				if(arr[j]==1)
				c++;
				else
				o++;
				if(c>o)
				{
					arr[j]=0;
					c--;
					o++;
				}
			}
			
			
		}
		for(int i=0;i<n;i++)
			{
			    if(arr[i])
				cout<<")";
				else
				cout<<"(";	
			}	
			cout<<endl;
	}
	return 0;
}
