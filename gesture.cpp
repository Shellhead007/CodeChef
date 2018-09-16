#include<iostream>
using namespace std;
int main()
{
 int t,n,i,h1,h2,h3;char a[10];
 cin>>t;
 while(t--)
 {
    cin>>n;
    cin>>a[10];
    if(a[i]=='Y')
        h1=1;
        break;
    if(a[i]=='I')
        h2=1;
        break;
    if(a[i]=='N')
        h3=1;
        break;
    if(h1==1&&h2==0&&h3==1)
      cout<<"NOT INDIAN"<<endl;
    if(h2==1&&h1==1&&h3==1)
     cout<<"INDIAN"<<endl;
    if(h3==1&&h1==0&&h2==0)
      cout<<"NOT SURE"<<endl;
 }
    return 0;
}
