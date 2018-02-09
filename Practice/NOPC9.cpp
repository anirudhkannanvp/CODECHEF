#include "bits/stdc++.h"
using namespace std;
int main()
{
int j,n,x[26]={0},i,st=0;
string a;
cin>>a;
n=a.size();
for(i=0;i<n;i++)
{
x[a[i]-'a']++;
}
for(i=0;i<n;i++){
for(j=i-1;j>=0;j--){
if(a[i]==a[j])
{
st=1;
break;
}
st=0;
}
if(st!=1)
{
cout<<a[i]<<x[a[i]-'a'];
}
}
return 0;
}
