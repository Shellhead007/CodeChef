#include<bits/stdc++.h>
#include<list>
using namespace std;
int  list<int[]> FindAllFourSquares(int N)
int main()
{
	
	std::ios::sync_with_stdio(false);
	short t;
	cin>>t;
   
	while(t--)
	{
		 int n,q,p,multiply;
		cin>>n>>q>>p;
		
		long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		while(q--)
		{
			int  s[3];
			for(int i=0;i<3;i++)
			{
				cin>>s[i];
			}
		
			
			if(s[0]==1)
			{
				arr[s[1]-1]=s[2];
			}
			else 
			{
				multiply = 1;
				for(int i = s[1];i<=s[2];i++)
				{
					multiply*=arr[i-1];
				}
                
			     int d =  list<int[]> FindAllFourSquares(int N)
    
 
  /*for(m=1;!(n%4);n/=4)m*=2;
  a=sqrt(n);
  a-=(3+n-a*a)%4/2;
  for(;(d=r)-r;q++)
  {
  b=q>>8;c=q%256;
  r=sqrt(n-a*a-b*b-c*c);
  cnt = true;
  }
  printf("%d %d %d %d ",a*m,b*m,c*m,d*m);
  
   if(!cnt)
   {
   	cout<<"-1"<<endl;
   }*/
        	}
		}
	}
	return 0;
}
 // Return a list of all integer quads (a,b,c,d), where:
    //      a^2 + b^2 + c^2 + d^2 = N,
    // and  a >= b >= c >= d,
    // and  a,b,c,d >= 0
    int list<int[]> FindAllFourSquares(int N)
    {
        // get all two-square sums <= N, in descending order
        List<List<int[]>> Sqr2s = TwoSquareSumsLessThan(N);

        // Cross the descending list of two-square sums <= N with
        // the same list in ascending order, using a Merge-Match
        // algorithm to find all combinations of pairs of two-square
        // sums that add up to N
        List<int[]> hiList, loList;
        int[] hp, lp;
        int hiSum, loSum;
        List<int[]> results = new List<int[]>();
        int prevHi = -1;
        int prevLo = -1;

        //  Set the Merge sources to the highest and lowest entries in the list
        int hi = Sqr2s.Count - 1;
        int lo = 0;

        //  Merge until done ..
        while (hi >= lo)
        {
            // check to see if the points have moved
            if (hi != prevHi)
            {
                hiList = Sqr2s[hi];
                hp = hiList[0];     // these lists cannot be empty
                hiSum = hp[0] * hp[0] + hp[1] * hp[1];
                prevHi = hi;
            }
            if (lo != prevLo)
            {
                loList = Sqr2s[lo];
                lp = loList[0];     // these lists cannot be empty
                loSum = lp[0] * lp[0] + lp[1] * lp[1];
                prevLo = lo;
            }

            // do the two entries' sums together add up to N?
            if (hiSum + loSum == N)
            {
                // they add up, so cross the two sum-lists over each other
                foreach (int[] hiPair in hiList)
                {
                    foreach (int[] loPair in loList)
                    {
                        // make a new 4-tuple and fill it
                        int[] quad = new int[4];
                        quad[0] = hiPair[0];
                        quad[1] = hiPair[1];
                        quad[2] = loPair[0];
                        quad[3] = loPair[1];

                        // only keep those cases where the tuple is already sorted
                        //(otherwise it's a duplicate entry)
                        if (quad[1] >= quad[2]) //(only need to check this one case, the others are implicit)
                        {
                            results.Add(quad);
                        }
                        //(there's a special case where all values of the 4-tuple are equal
                        // that should be handled to prevent duplicate entries, but I'm
                        // skipping it for now)
                    }
                }
                // both the HI and LO points must be moved after a Match
                hi--;
                lo++;
            }
            else if (hiSum + loSum < N)
            {
                lo++;   // too low, so must increase the LO point
            }
            else    // must be > N
            {
                hi--;   // too high, so must decrease the HI point
            }
        }
        return results;
    }

