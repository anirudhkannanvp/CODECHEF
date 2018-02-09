#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,query,cur,a[1000000],op,i,k,hght,cur1,l,r,x,j;
    cin>>n>>query;
    a[0]=-1;
    for(i=1;i<=n;i++)cin>>a[i];
    while(query--){
        cin>>op;
        if(op==1){
            cin>>cur>>k;
            hght=a[cur];
            cur1=cur;
            for(j=cur1;j<=n;j++){
                if(k<=0)break;
                if(j-cur>100)break;
                if(a[j]>a[cur]){
                    cur=j;
                    k--;
                }
            }
            cout<<cur<<"\n";
        }
        else{
            cin>>l>>r>>x;
            for(j=l;j<=r;j++)a[j]+=x;
        }
        
    }
    return 0;
}
