#include<iostream>
using namespace std;

int main()
{
    int i,num,rev=0,temp,rem;
   cin>>i;
   while(i--)
   {
       cin>>num;rev = 0;
       temp = num;
       while(temp/10>0)
       {
          rev = rev*10+temp%10;
          temp = temp/10;
       }
       rev = rev*10+temp%10;
       if(rev==num)
       {
           cout<<"wins"<<endl;
       }
       else{
        cout<<"losses"<<endl;
       }
   }return 0;
}
