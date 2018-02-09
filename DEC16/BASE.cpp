#include "bits/stdc++.h"
using namespace std;
int t;
long int n,n1;
int main()
{
long int c=0,rem,q;
long int i;
scanf("%d",&t);
while(t--)
{
scanf("%ld",&n);
for(i=2;i<=(n/2);i++)
{
n1=n;
while(n1>=i)
{
n1/=i;
}
if(n1==1)
c++;
}
if((n%2)==1)
c+=n/2+1;
else
c+=n/2;
if(n==1)
printf("INFINITY\n");
else
printf("%ld\n",c);
c=0;
}
return 0;
}
