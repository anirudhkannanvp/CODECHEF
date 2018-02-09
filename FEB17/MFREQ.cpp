#include "bits/stdc++.h"
using namespace std;
int main()
{
int n,m,a[100000],i,r,l,k,val;
//map<int,int>mp;
scanf("%d %d",&n,&m);
for(i=1;i<=n;i++)
{
	cin>>val;
	a[i]=val;
	//mp[val]++;
}
while(m--)
{
scanf("%d %d %d",&l,&r,&k);
int b[10000];
int k1=0;
map<int,int>mp1;
for(i=l;i<=r;i++)
{
	b[k1++]=a[i];
	mp1[a[i]]++;
}
int ele,maxi,temp,st=0;
val=0;
for(map<int,int>::iterator it=mp1.begin();it!=mp1.end();it++)
{   
	maxi=(*it).second;
	ele=(*it).first;
	if(maxi>=k)
	{
	cout<<ele<<endl;
	st=1;
	break;
    }
//cout<<(*it).first<<"  "<<(*it).second<<endl;
}
if(st==0)
cout<<-1<<endl;
//cout<<"  "<<ele<<" "<<maxi<<endl;
}
return 0;
}
