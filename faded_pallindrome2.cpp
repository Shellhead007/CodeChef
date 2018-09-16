#include <iostream>
#include<string>
using namespace std;


int main(){

	short t;
	cin>>t;
	
	string s;
	int i;
	
	while(t--){
		
		cin>>s;
				
		for(i=0;i<s.size();i++){
			
			if(s[i]=='.'){
			if(s[s.size()-1-i]=='.'){
				s[i]=97;
				s[s.size()-1-i]=97;
			}else{
				s[i]=s[s.size()-1-i];
			}
			
		}
		}
		
     bool isPalindrome=true;
	
	char *front=&s[0];
	char *back=&s[s.size()-1];
	
	while(front<=rear){
		
		if(*front == *back){
			
			front++;
			back--;
			
		}else{
			isPalindrome=false;
			break;
		}
		
	}
	
	if(isPalindrome==true){
		cout<<s<<endl;
	}else{
		cout<<"-1\n";
	}
		
		
	}
	
	return 0;

}
