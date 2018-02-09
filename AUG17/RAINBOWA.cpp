#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n,a1[100000],a2[100000],i,k2,st;
    cin>>t;
    while(t--){
        cin>>n;
                //cout<<"HO   1";
        for(i=0;i<n;i++)cin>>a1[i];
        k2=0;
        a2[k2++]=a1[0];
        for(i=1;i<n;i++){
            if(a1[i]!=a1[i-1])
                a2[k2++]=a1[i];
        }
                //cout<<"HO2"<<k2;
        st=0;
        if(k2!=13)
            st=1;
        else{
            for(i=0;i<7;i++){
                if(a2[i]!=a2[12-i])
                {
                    st=1;
                    break;
                }
                if(a2[i]!=i+1){
                    st=1;
                    break;
                }
            }
        }
               // cout<<"HO3";
        for(i=0;i<=n/2;i++)
        {
            if(a1[i]!=a1[n-i-1])
            {
                st=1;
                break;
            }
        }
        //cout<<"HO";
        if(st==1)cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
    return 0;
}
