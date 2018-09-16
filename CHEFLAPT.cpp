#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c[n];

		int hash[101];
		memset(hash,0,sizeof(hash));
		for(int i=0;i<n;i++)
		{
			cin>>c[i];
			hash[c[i]]++;
		}
		int index = 0;
		for(int i=0;i<101;i++)
		{
			if(hash[i]==1)
			{
				index = i;
				break;
			}
		}
		cout<<index<<endl;
	}
	return 0;
}