#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[1000001];
	
	int c=0,h=0,e=0,f=0;
 
    cin>>str;
   // int len = str.size();
    for(int i=0;str[i]!='\0';i++)
    {
    	if(str[i]=='C')
    	c++;
    	
    	else if(str[i]=='H' && c>h)
    	h++;
    	
    	else if(str[i]=='E' && h>e)
    	e++;
    	
    	else if(str[i]=='F' && e>f)
    	f++;
		
	}
	cout<<f<<endl;
	return 0;
}
