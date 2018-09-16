#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,r,max=0;

    cin>>i;


        cin>>j>>k;




        while(k>0)
        {

       for(l=0;l<i;l++)
        {r=j%k;
        if(r>max)
        {
            max=r;
        }
        }
        }
        cout<<max<<endl;

     return 0;
}
