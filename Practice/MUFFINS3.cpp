#include "bits/stdc++.h"
using namespace std;
int t;
long int n;
int main()
{
scanf("%d",&t);
while(t--)
{
scanf("%ld",&n);
if(n==0)
printf("0\n");
else
printf("%ld\n",n/2+1);
}
return 0;
}
