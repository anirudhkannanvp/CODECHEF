#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int b,long long int c)
{
long long int res=1;
a=a%c;
while(b>0)
{
if(b &1)
res=(res*a)%c;
b=b>>1;
a=(a*a)%c;
}
return res;
}
int main()
{
long long int t,n,ans;
long long int n1=1000000007;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
ans=power(2,n-1,n1)-2;
if(n==1)
ans=0;
printf("%lld",ans);
printf("\n");
}
return 0;
}
