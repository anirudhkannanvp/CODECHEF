#include "bits/stdc++.h"
using namespace std;
int main()
{
int t,n,k,a[100],i,eve=0;
cin>>t;
while(t--)
{
cin>>n>>k;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
if(a[i]%2==0)
eve++;
if(k==0)
{
if(eve==n)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}
else if(eve>=k)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
eve=0;
}
return 0;
}
