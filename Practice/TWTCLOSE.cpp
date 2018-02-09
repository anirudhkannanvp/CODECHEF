#include "bits/stdc++.h"
using namespace std;
int main(){
int k,n,j,m[1001]={0},i,c=0;
char a[100],a1;
cin>>n>>k;
while(k--)
{
cin>>a;
if(a[2]=='O')
{cout<<"0"<<endl;
for(i=0;i<n;i++)
m[i]=0;
}
else
{
cin>>j;
if(m[j-1]==0)m[j-1]=1;
else if(m[j-1]==1)m[j-1]=0;
for(i=0;i<n;i++)
if(m[i]==1)c++;
cout<<c<<endl;
c=0;
}
}
return 0;
}
