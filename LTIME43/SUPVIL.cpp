#include "bits/stdc++.h"
using namespace std;
char a[100004][16];
int main()
{
int t,n,n1,c1,c2,i;
char b[16];
cin>>t;
while(t--){
c1=0;
c2=0;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
n1=strlen(a[i]);
strcpy(b,a[i]);
//cout<<a[i]<<" "<<b<<" "<<n1<<endl;
//cout<<b[n-1]<<" "<<b[n-2]<<"  "<<b[n-3]<<endl;
if(b[n1-1]=='n' && b[n1-2]=='a' && b[n1-3]=='m')
c1++;
else
c2++;
//cout<<c1<<"  "<<c2<<endl;
if((c1-c2)==2)
{
cout<<"superheroes"<<endl;
break;
}
if(c2-c1==3)
{
cout<<"villains"<<endl;
break;
}
}
if(i==n)
{
cout<<"draw"<<endl;
}
}
return 0;
}
