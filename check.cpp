#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	long long int n,d;
	d = pow(10,9) + 7;
	n = t % d;
	cout<<n<<endl;
}
