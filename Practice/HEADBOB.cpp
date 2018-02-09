#include "bits/stdc++.h"
using namespace std;
int main()
{
int t,n,c1,c2,c3,i;
char a1[20000],a;
cin>>t;
while(t--)
{
c1=0;
c2=0;
c3=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a1[i];
a=a1[i];
if(a=='N')
c1++;
if(a=='Y')
c2++;
if(a=='I')
c3++;
}
if(c3==0 && c2!=0 && c1!=0)
cout<<"NOT INDIAN"<<endl;
else if(c2==0 && c1!=0 && c3!=0)
cout<<"INDIAN"<<endl;
else if(c3==0 && c2==0 && c1!=0)
cout<<"NOT SURE"<<endl;
else if(c1==0 && c2!=0 && c3==0)
cout<<"NOT INDIAN"<<endl;
else if(c1==0 && c2==0 && c3!=0)
cout<<"INDIAN"<<endl;
}
return 0;
}
