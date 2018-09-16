// tree traversing
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	 long long int n;
	 cin>>n;
	 
	 long long int arr[n+1],crr[n+1];
	 for(int i=1;i<n+1;i++)
	 {
	 	cin>>arr[i];
	 	crr[i]=0;
	 }
	 crr[0]=0;
	 for(int i=1;i<n+1;i++)
      {
      	crr[arr[i]]++;
	  }
	  for(int i=1;i<n+1;i++)
	  {
	  	if(crr[i]==0)
	  	cout<<i<<" ";
	  }
	  return 0;


	 
	 
	 
}
