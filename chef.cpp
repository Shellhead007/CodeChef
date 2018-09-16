#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;
// Problem can be solved with stack, but the author forgot about stack on that day,
// so here solution with BIT comes :) Let's put F[a[i]] = i, after we proccesed chef number
// i; then to find the closest one with higher/lower mean we can simply get min/max on a suffix/prefix
//of array F[].
long long ans, md = 1000000000 + 7;
int i, v, n, k, j;
int inf = 1000000000;
int a[1000333], f[1000033];

int get(int x){
    int res = inf;
    while (x > 0){
        res = min(res, f[x]);
        x = (x & (x+1)) - 1;
    }      
    return res;
}

void upd(int x, int d){
     while (x <= 1000000){
         f[x] = min(f[x], d);
         x = x | (x+1);
     }
}

int main(){
    scanf("%d%d", &n, &k);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 1; i <= 1000000; i++)
        f[i] = inf;
    ans = 1;
    for (i = n; i >= 1; i--){
        v = get(a[i] - 1);
        upd (a[i], i); 
        if (v == inf) continue;
        long long x = (v - i + 1);
        ans = (ans * x) % md;
    }        
    printf("%lld\n", ans);
}
