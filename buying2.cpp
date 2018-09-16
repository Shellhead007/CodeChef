#include<iostream>
using namespace std;
int main()
{ 
  int t,banknotes,price, sum=0,ans=0,ns,r;
  cin>>t;
  	while(t--)
  	{ 
  	   
  		cin>>banknotes>>price;
  		int a[banknotes];
  		for(int i=0;i<banknotes;i++)
  		{
  			cin>>a[i];
  			sum = sum+a[i];
		}
	//	cout<<sum;
		  ns = sum/price;
		  r  = sum%price;
		  
		int flag=0;
		 for(int i=0;i<banknotes;i++)
    {
        if(a[i]<=r)
        {  
            flag++;
            cout<<"-1"<<endl;
            break;
        }
    }
    
    if(flag==0)
	 cout<<ans<<endl;
  		
	  }
	  return 0;
}
