#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		int score[n];
		int c;
		for(int i=0;i<n;i++)
		{
		   cin>>c;
		   int type[c],typecount[6];
		   for(int j=0;j<c;j++)
		    {
		    	cin>>type[j];
		       
		    }
		     sort(type,type+c);
		     k=0;
		     score[i] = c;
		     memset(typecount,0,sizeof(typecount));	
		     
			for(int j=0;j<c;j++)
			{   
			   typecount[type[j]-1]++;
		    }
		     sort(typecount,typecount+6);
		    
		   
		  
		   for(int j=0;j<6;j++)
		    {
		       	if(typecount[j]!=0)
		       	{
		       	    if(j==0){
		       	    	score[i]+=typecount[j]*4;
					   }
					   else if(j==1){
					   		score[i]+=typecount[j]*2;
					   }
					   else if(j==2){
					   		score[i]+=typecount[j];
					   }
					   else
					   break;
					   
					   
					   for(k=j+1;k<6;k++){

                                        typecount[k]-=typecount[j];
                                }
				}
			}
			 
			
		}
		
		int startIndex=distance(score,max_element(score,score+n));

        reverse(score,score+n);

        int rearIndex=distance(score,max_element(score,score+n));

        if(startIndex+rearIndex == n-1){

                if(startIndex==0){
                        cout<<"chef\n";
                }else{
                        cout<<startIndex+1<<endl;
                }

        }else{
                cout<<"tie\n";
        }


        }
		

	
	
	return 0;
}
