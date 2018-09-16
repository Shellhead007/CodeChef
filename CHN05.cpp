#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m;
    	cin>>n>>m;
    	if(n-1<=2)
    	{
    		int d = n-1;
    		cout<<m*d<<endl;
    	}
    	else
    	{
    		int mtime = m + m-1;
    		int d1 = n -2;
    		cout<<mtime + d1<<endl;
    	}
    }
	return 0;
}