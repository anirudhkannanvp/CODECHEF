#include "bits/stdc++.h"
using namespace std;
int main()
{
long long int t,c,d,a=LONG_MAX,l,b=LONG_MAX,g,i;
scanf("%lld",&t);
while(t--){
b=-1;
a=-1;
scanf("%lld %lld %lld",&c,&d,&l);
g=c+d;
if(d>=c)a=d;
else b=c;
if(c-d>=d)
i=c-d;
else
i=d;
if((g*4==l))printf("yes\n");
else if((a==d) && l>=d*4 && l%4==0 && l<=g*4)printf("yes\n");
else if((b==c) && l>=i*4 && l%4==0 && l<=g*4)printf("yes\n");
else cout<<"no"<<endl; 
} 
return 0;
}
