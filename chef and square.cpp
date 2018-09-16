#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		
		int temp;
		
		for(int i=0;i<k;i++)
		{
			
			if(i<(k-1)/2){
				
				temp=(k+1)/2+i;		
						
				for(int j=temp+1;j>0;j--){
					cout<<j<<" ";
				}
				
				for(int j=0;j<k-temp-1;j++){
					cout<<k-j<<" ";
				}
				
			}else{
				
				temp=i-(k-1)/2;
				
				for(int j=temp+1;j>0;j--){
					cout<<j<<" ";
				}
				
				for(int j=0;j<k-temp-1;j++){
					cout<<k-j<<" ";
				}
				
			}
			
			cout<<endl;
			
		}
		
	}
	
	return 0;
}
		

