#include<bits/stdc++.h>
#include<iostream>
#include <stdio.h>
#include<math.h>
using namespace std;
int main()
{
int wa1;
float ab1, nb1;
cin>>wa1>>ab1;
if(wa1%5==0 && (wa1+0.5)<ab1)
{
nb1=ab1-wa1-0.5;
printf("%.2f", nb1);
}
else
{
printf("%.2f", ab1);
}
return 0;
}
 
