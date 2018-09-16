#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
   {
   	  long long int n;
   	  cin>>n;
   	  long long int arr[n];
   	  for(int i=0;i<n;i++)
   	  {
   	  	cin>>arr[i];
		 }
		 int sum=0,count5=0,count2=0;
		 for(int i=0;i<n;i++)
   	  {
   	  	   sum = sum+arr[i];
   	  	   if(arr[i]==5)
   	  	   count5++;
   	  	   if(arr[i]==2)
   	  	   count2++;
   	  	   
		 }
		 float div=0;
		 div = sum/n;
		 if(count2==0 && count5!=0 && div>=4.0)
		 {
		 	cout<<"Yes"<<endl;
		 }
		 else
		 cout<<"No"<<endl;
   }
   return 0;
}
