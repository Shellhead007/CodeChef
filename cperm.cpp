#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//long long int multiplyNumbers(int n);
#define ull unsigned long long
#define MODULO 1000000007

ull PowMod(ull n)
{
    ull ret = 1;
    ull a = 2;
    while (n > 0) {
        if (n & 1) ret = ret * a % MODULO ;
        a = a * a % MODULO ;
        n >>= 1;
    }
    return ret;
}
int main()
{
	ull t;
	cin>>t;
	while(t--)
	{
		ull n,temp,ans;
		cin>>n;
		ans=PowMod(n-1);
		temp = 1000000007;
		
		//for(int i=1;i<=n-1;i++)
		//{
		//	ans = (2*ans)%temp ;
		//}
		
	//	ans1 = ans - 2%temp;
		if(n<=2)
		cout<<0<<endl;
		else
		cout<<ans-2<<endl;
		
	}
	return 0;
}
/*long long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}*/
