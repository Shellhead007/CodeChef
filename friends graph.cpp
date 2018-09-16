#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<utility>
#include <math.h>     
#include<queue>
#include<algorithm>
#define si(t) scanf("%d",&t)
#define sii(t,t2) scanf("%d %d",&t,&t2)
#define sl(t) scanf("%lld",&t)
#define sll(t,t2) scanf("%lld %lld",&t,&t2)
#define pi(t) printf("%d\n",t)
#define pl(t) printf("%lld\n",t)
#define pii(t,t1) printf("%d %d\n",t,t1)
#define pll(t,t1) printf("%lld %lld\n",t,t1)
#define pp pair<int,int>
#define ll long long int
#define pb push_back
#define F first
#define S second
#define sz size()
#define mp make_pair
using namespace std;
#define boost    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define DRT()     int test_case;cin>>test_case;while(test_case--)
#define pb        push_back
#define mp        make_pair
#define INF 100000000
#define SZ(a) (int)(a.size())
int main()
{
	boost;
	int n;
	cin>>n;
	int adj[n][n];
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			cin>>adj[i][j];
		}
	}
	int sum;
	int mat3[n][n];
	 for (int i = 0 ; i <= n-1 ; i++ )
        {
    		for (int j = 0 ; j <= n-1 ; j++ )
                {
        			sum = 0;
				   for (int k = 0 ; k <=n-1 ; k++ )
                 	    sum = sum + adj [i][k] * adj[k][j];
                        mat3[i][j] = sum ;
				}
        }
        int count = 0;
        for(int i=0;i<=n-1;i++)
        {
        	for(int j=0;j<=n-1;j++)
        	{
        		if(i!=j)
        		{
        			count = count+mat3[i][j];
				}
			}
		}
		cout<<count<<endl;
	return 0;
}
