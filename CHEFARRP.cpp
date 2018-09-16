#include<bits/stdc++.h>
using namespace std;
int sub(long long int arr[] , int n)
{
    int count = 0; 
    for (int i=0; i<n; i++)
    {
        long long int product = arr[i];
        long long int sum = arr[i];
        for (int j=i+1; j<n; j++)
        {
            if (product==sum)
                count++;
 
            product *= arr[j];
            sum += arr[j];
        }
 
        if (product==sum)
            count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
    	long long int arr[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>arr[i];
    	}
    	int d = sub(arr , n);
    	cout<<d<<endl;
  
	}
	return 0;
}