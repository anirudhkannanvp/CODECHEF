#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int aa[10000000],n,i,q,a,b,c,d,a1[10000000],a2[10000000],k,j,ans;
int t;
cin>>t;
while(t--){
cin>>n>>q;
for(i=0;i<n;i++)
cin>>aa[i];
while(q--){
cin>>a>>b>>c>>d;
k=0;
for(i=a-1;i<b;i++)
a1[k++]=aa[i];
sort(a1,a1+k);
k=0;
for(i=c-1;i<d;i++)
a2[k++]=aa[i];
sort(a2,a2+k);
ans=0;
for(j=0;j<b-a+1;j++)
{
    if(a1[j]!=a2[j])
    ans+=1;
}
if(ans>1)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}
}
return 0;
}
