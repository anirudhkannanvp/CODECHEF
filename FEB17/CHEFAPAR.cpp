#include "bits/stdc++.h"
using namespace std;
int main()
{
int k,t,n,a[100000],i,data,c1,c0;
long int s=0;
scanf("%d",&t);
while(t--)
{
s=0;k=0;c1=0;c0=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
cin>>data;
if(data==1)
c1++;
else
c0++;
a[k++]=data;
}
s+=c0*1000;
for(i=0;i<k;i++)
if(a[i]==0)
break;
s+=(k-i)*100;
printf("%ld\n",s);
}
return 0;
}
