#include<iostream>
using namespace std;
int main()
{
    int a,b,difference;
    cin>>a;
    cin>>b;
    difference = a-b;

    if(difference%10<9)
    {
        difference++;
    }
    else
        difference--;
    cout<<difference<<endl;
    return 0;
}
