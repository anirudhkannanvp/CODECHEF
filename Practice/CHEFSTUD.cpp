#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int t,n,c,i;
char a[100005];
int main()
{
cin>>t;
while(t--){
c=0;
cin>>a;
n=strlen(a);
for(i=0;i<n;i++){
if(a[i]=='<')
a[i]='>';
else if(a[i]=='>')
a[i]='<';
}
for(i=0;i<n;i++){
if(a[i]=='>' && a[i+1]=='<')
c++;
}
cout<<c<<endl;
}
return 0;
}
