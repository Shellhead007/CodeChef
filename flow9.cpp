#include<iostream>
using namespace std;

int main()
{
    int t; char a;int i;
    cin>>t;

    for( i=0; i<t; i++)
    {
        cin>>a;






         if(a=='c'||a=='C')
        {
         cout<<"Cruiser"<<endl;
        }
       else  if(a=='b'||a=='B'){cout<<"BattleShip"<<endl;}
       else   if(a=='d'||a=='D'){cout<<"Destroyer"<<endl;}
       else  if(a=='f'||a=='F'){cout<<"Frigate"<<endl;}



       }


    return 0;
}
