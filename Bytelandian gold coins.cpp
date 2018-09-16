#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	int a=0,b=0,c=0,sum=0;
	while(cin>>n)
	{
		a = n/2;
		b = n/3;
		c = n/4;
		
		sum = a+b+c;
		if(n<12)
		{
			cout<<n<<endl;
		}
		if(n<1000000)
	{
	
		
		if(sum>=n)
		{
			cout<<sum<<endl;
		}
		else
		{
			cout<<n<<endl;
		}
    }
}
	return 0;
}
