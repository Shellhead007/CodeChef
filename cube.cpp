#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define all(a) a.begin(),a.end()
#define bitcnt(x) __builtin_popcountll(x)
#define MOD2 1000000007
#define BASE1 31
#define BASE2 255
#define MOD1 1000003
typedef unsigned long long int uint64;
typedef long long int int64;


int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int64 a=n;
		int64 b= n-2;
		if(a==1){
			cout<<1<<endl;
			continue;
		}
		a=(a-b)*(a*a+b*b+a*b);
		cout<<a<<endl;
	}
	return 0;
}
