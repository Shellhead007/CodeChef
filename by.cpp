#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main() {
int t,  sum=0;
cin>>t;
while(t--)
{
    int b[100];
    int m,n;
    cin>>n;
    cin>>m;
    int i,ns,r;
  //  int sum=0;
    
    for(i=0;i<n;i++)
    { 
        cin>>b[i];
        sum=sum+b[i];
    }
  
    ns=sum/m;
    r=sum%m;
    
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(b[i]<=r)
        {  
            flag++;
            cout<<"-1"<<endl;
            break;
        }
    }
    
    if(flag==0)
    cout<<ns<<endl;
}
return 0;
}
 
