#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<math.h>
#define si(t)      scanf("%d",&t) 
#define sii(t,t2)  scanf("%d %d",&t,&t2)
#define sl(t)      scanf("%lld",&t)
#define sll(t,t2)  scanf("%lld %lld",&t,&t2)  
#define pi(t)      printf("%d\n",t)
#define pl(t)      printf("%lld\n",t)
#define pii(t,t1)  printf("%d %d\n",t,t1)
#define pll(t,t1)  printf("%lld %lld\n",t,t1)
#define len(a)     ((int) (a).size())
#define pp         pair<int,int>
#define ll         long long int
#define pLL        pair<ll,ll>
#define pb         push_back
#define F          first
#define S          second
#define sz         size()
#define mp         make_pair
using namespace std;
#define boost      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define DRT()      int test_case;cin>>test_case;while(test_case--)
#define pb         push_back
#define mp         make_pair
#define SZ(a)      (int)(a.size())
const int N =      3e5 + 5;
#define MAX        100005
#define INF_MAX    2147483647
#define INF_MIN   -2147483647
#define INF_LL     9223372036854775807
#define INF        2000000000
#define PI         acos(-1.0)
#define EPS        1e-9
#define mod        1000000007
#define setzero(a) memset(a,0,sizeof(a))
#define setdp(a)   memset(a,-1,sizeof(a))
# define NO_OF_CHARS 256
int main(int argc, char const *argv[])
{
	/* code */
	boost;
	DRT()
	{
		ll n,d;
		cin>>n>>d;
		ll arr[n];
		ll sum = 0;
		ll subarr[d];
		ll numarr[d];
		setzero(subarr);
		setzero(numarr);
		double avg = 0;
		for (int i = 0; i < n; ++i)
		{
			/* code */cin>>arr[i];
			sum = sum+arr[i];
			subarr[i%d]+=arr[i];
			numarr[i%d]++;
		}
		avg = (double)sum/n;
		//cout<<avg<<endl;
		ll diff = 0,cunt=0,q=0,t=0;
		int j=0;
		if(avg != floor(avg))
		{
		c	out<<"-1"<<endl;
			continue;

		}
		bool flag = 0;
			for (int i = 0; i < d; ++i)
			{
				if(avg!=(double)subarr[i]/numarr[i])
				{
					cout<<"-1"<<endl;
					flag =1;
					break;
				}
			}
			for (int i = 0; i < d; ++i)
			{
				/* code */q = arr[i]-avg;
				j = i+d;
				
				cunt+=abs(q);
				while(j<n)
				{
					arr[j]+=q;
					q = (arr[j]-avg);
					j = j+d;
					cunt = cunt+abs(q);
				}	
			
			}
			if(flag==0)
			cout<<cunt<<endl;
		}
		
	return 0;
	
	}

	