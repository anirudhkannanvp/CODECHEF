#include "bits/stdc++.h"
using namespace std;
int main()
{
int t,st=0;
long long int mg,my,mr,og,oy,or1,pg,py,pr,max1=0;
scanf("%d",&t);
while(t--){
max1=0;st=0;
cin>>mg>>my>>mr;
cin>>og>>oy>>or1;
cin>>pg>>py>>pr;
if((pg+og+mg)>=max1)
{
st=1;
max1=pg+og+mg; 
}
if((py+oy+my)>=max1)
{
st=1;
max1=py+oy+my; 
}
if((pr+or1+mr)>=max1)
{
st=1;
max1=pr+or1+mr;
} 
if((pg+py+pr)>=max1)
{
st=1;
max1=pg+py+pr;
} 
if((og+oy+or1)>=max1)
{
st=1;
max1=og+oy+or1;
}
if((mg+my+mr)>=max1)
{
st=1;
max1=mg+my+mr;
}
if(max1%2==0 && max1!=0)
max1-=1;
cout<<max1<<endl;
}
return 0;
}
