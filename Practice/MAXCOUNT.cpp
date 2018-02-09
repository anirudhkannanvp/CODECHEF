#include"bits/stdc++.h"
using namespace std;
int main()
{
int n,t,a[1000],i,m[10001]={0},max,n1,n2;
scanf("%d",&t);
while(t--)
{
max=0;n1=0;n2=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>max)
max=a[i];
}
for(i=0;i<n;i++)
m[a[i]]++;
for(i=0;i<=max;i++)
{
if(n1<m[i]){
n1=m[i];
n2=i;
}
}
cout<<n2<<" "<<n1<<endl;
for(i=0;i<10001;i++)
m[i]=0;
}
return 0;
}
