#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
long int t,n,d,a[1000000],i,data,sum,avg,chec1[1000000],chec2[1000000],answer,st,k;
cin>>t;
while(t--){
sum=0;
cin>>n>>d;
for(i=0;i<n;i++){
cin>>data;
a[i]=data;
sum+=data;
}
avg=sum/n;
for(i=0;i<d;i++){chec1[i]=a[i],chec2[i]=1;}
answer=0;
//for(i=0;i<d;i++)cout<<chec1[i]<<"--";
for(k=d;k<n;k++){
chec1[k%d]+=a[k];
chec2[k%d]+=1;
}
for(i=0;i<n;i++){
if(a[i]<avg){
answer+=avg-a[i];
if(i+d<n){
a[i+d]-=avg-a[i];
a[i]+=avg-a[i];
}
}
if(a[i]>=avg){
answer+=a[i]-avg;
if(i+d<n){
a[i+d]-=avg-a[i];
a[i]+=avg-a[i];
}
}
}
int st=0;
//for(i=0;i<d;i++)cout<<chec1[i]<<" ";
for(k=0;k<d;k++){
if(chec1[k]%avg==0 && chec1[k]/chec2[k]==avg)
st=1;
else{
st=-1;
break;
}
}
if(sum%n==0 && st!=-1)cout<<answer<<"\n";
else cout<<"-1"<<"\n";
}
return 0;
}
