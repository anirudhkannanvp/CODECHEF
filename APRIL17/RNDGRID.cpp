#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
	int t,l,n,x,y,i,j,k[10005],k1,f,ans,u,o,x1,y1;
	char a[10005],b[10005][10005];
	cin>>t;
	while(t--)
	{
	    cin>>l>>n;
	    cin>>a;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        cin>>b[i][j];
	    }
	    k1=0;
	    f=0;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if(b[i][j]=='#')
	            continue;
	            else
	            {
	                x=i;
	                y=j;
	                x1=i;
	                y1=j;
	                //cout<<"x :"<<x<<"y :"<<y;
	                for(o=0;o<strlen(a);o++)
	                {
	                    if(a[o]=='D')
	                    {
	                    x+=1;
	                    if(b[x][y]=='#')
	                    break;
	                    }
	                    if(a[o]=='U')
	                    {
	                    x-=1;
	                    if(b[x][y]=='#')
	                    break;
	                    }
	                    if(a[o]=='R')
	                    {
	                    y+=1;
	                    if(b[x][y]=='#')
	                    break;
	                    }
	                    if(a[o]=='L')
	                    {
	                    y-=1;
                        if(b[x][y]=='#')
	                    break;
	                    }
	                    if(x<0 || x>=n || y<0 || y>=n ||b[x][y]=='#')
	                    {   
	                        //cout<<"x :"<<x<<"y :"<<y<<endl;
	                        break;
	                    }
	                    k1+=1;
	                    
	                }
	                //cout<<" "<<k1<<endl;
	                k[f++]=k1;
	                k1=0;
	                
	            }
	        }
	    }
	    ans=k[0];
	    for(u=1;u<f;u++)
	    {   
	        //cout<<ans<<" ";
	        ans^=k[u];
	    }
	 cout<<ans<<endl;
    //cout<<"answer"<<ans<<endl;	
    k1=0;
	}
	return 0;
}
