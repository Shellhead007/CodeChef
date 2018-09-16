#include<iostream>
using namespace std;
int main()
{
	int t,evencount=0,oddcount=0;
	cin>>t;
	int arr[t];
	int odd[t],even[t];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<t;i++)
	{
		if(arr[i]%2==0)
		{
			even[i]=arr[i];
			evencount++;
		}
		else
		{
			odd[i]=arr[i];
			oddcount++;
		}
	}
	
	if(evencount>oddcount)
	{
		cout<<"READY FOR BATTLE"<<endl;
	}
	else
	{
		cout<<"NOT READY"<<endl;
	}
	
	return 0;
}
