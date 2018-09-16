#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long int n,count1 = 1,i;
        int a[n];
        cin>>n;
        for(i=0;i<n;i++)
          cin>>a[i];
      for(i=0;i<n-1;i++)
      {
        if(a[i]<a[i+1])
            a[i+1] = a[i];
        else
            count1++;
      }
        cout<<count1<<endl;
    }
    return 0;
}
