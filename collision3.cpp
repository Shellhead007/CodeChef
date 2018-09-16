#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
int ncr(int n , int r)
{
	if(r == 0)
		return 1;
	if(n<r)
		return 0;
	return ncr(n-1 , r-1) + ncr(n-1 , r) ;
}
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j,count,ans;
        scanf("%d %d",&n,&m);
        char a[n][m];
        for(i=0;i<n;i++)
            scanf("%s",a[i]);
        ans=0;
        for(i=0;i<m;i++)
        {
            count=0;
            for(j=0;j<n;j++)
            {
                if(a[j][i]=='1')
                    count++;
            }
            if(count>1)
            ans+=ncr(count,2);
        }
        printf("%d\n",ans);
    }
    return 0;
}
    
