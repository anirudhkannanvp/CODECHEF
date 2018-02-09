#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int t,n,q,a[100000],l,r,k,c1,c2,i,temp;
	cin>>t;
	while(t--)
	{
	    cin>>n>>q;
	    for(i=1;i<=n;i++)
	    cin>>a[i];
	    while(q--)
	    {
	   cin>>l>>r>>k;
	   temp=a[l];
        c1=0;
        c2=0;
        for(i=l+1;i<=r;i++)
        {
            if(a[i]==temp)
            {
                c1+=1;
               continue;
            }
            if(c1+1>=k)
            {
                c2+=1;
            }
            c1=0;
            temp=a[i];
            continue;
        }
        if(c1+1>=k)
        c2+=1;
        cout<<c2<<endl;
	}
	}
	return 0;
}
