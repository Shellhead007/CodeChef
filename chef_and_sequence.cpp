# include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int n,Arr[10000],f,Brr[10000],k;
		scanf("%ld",&n);
		for(long int i = 0; i < n; i++)
			scanf("%ld",&Arr[i]);
 
		scanf("%ld",&f);
		for (long int i = 0; i < f; i++)
			scanf("%ld",&Brr[i]);
 
		k = 0;
		for(long int i = 0; i < n; i++)
		{
			if(Arr[i] == Brr[k])
				k++;
 
			if(k == f)
				break;
		}
		if(k == f)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
} 
