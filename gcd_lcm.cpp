#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main ()
{
    int t,u,l;long a,b,gcd,lcm;
    cin>>t;
    cin>>a>>b;
    if(a>b)
    {
        u=a;l=a;
    }
    else{u=b;l=a;}
    int rem=u%l;
    while(rem!=0)
    {
        u=l;
        l=rem;
        rem=u%l;
    }
    gcd=l;
    lcm=(a*b)/gcd;
    cout<<gcd<<" "<<lcm<<endl;
    return 0;
}
