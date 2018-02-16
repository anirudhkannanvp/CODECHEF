#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t,qu,n,op,l,r,no,i,maxi,mini,s,arr[1000009],tarr[1000009];
	cin>>t;
	while(t--)
	{ 
      memset(tarr,0,sizeof(tarr));
      cin>>n>>qu;
	  for(i=1;i<=n;i++)
	      arr[i]=i;
	  while(qu--)
	  { 
        cin>>op>>l>>r>>no;
	    if(op==2)
        {tarr[l]-=no;
         tarr[r+1]+=no;
        } 
	    if(op==1)
        {tarr[l]+=no;
         tarr[r+1]-=no;
        } 
	  }
       for(i=1;i<=n+1;i++)
       {tarr[i]+=tarr[i-1];
        arr[i]+=tarr[i];
       }    
	  s=maxi=mini=arr[1];
	  
	  for(i=2;i<=n;i++)
	  { 
        ll s=arr[i];
	    if(s>maxi)
	       maxi=s;    
	    if(s<mini)
	       mini=s;
	  }
	  cout<<maxi-mini<<endl;
	}
	return 0;
}
 
