#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char phrase[100000];
		char reverse[100000];int i,j;
		char * palindrome = reverse;
		
		cin>>phrase;
		
		int length = strlen(phrase);
		 bool test = true;

    for( i = 0; i != length/2; i++) 
    {
        if(test) 
        {
            if(phrase[i] != phrase[length-i-1])
            {
                test = false;
                cout<<"-1"<<endl;
            }

        }
        else
        {
            break;
        }
    }
  /*  if(test)
    {
        //cout << endl << "Phrase/Word is a Palindrome." << endl << endl;
        for(j = strlen(Phrase) - 1; j >= 0; Palindrome++, j--)
        {
            *Palindrome = Phrase[j];
        }
        cout << "The phrase and reverse statement is: " << Reverse << endl << endl;
    }
    else
    {
        cout << endl << "Phrase/Word is not a Palindrome." << endl << endl;
    }
    }
    return 0;
}
