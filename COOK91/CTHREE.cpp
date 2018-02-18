#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;



   
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll n,y,x,z,t,ans;
    ll i,j,array[100000];
    cin>>t;
    for(int t1=0;t1<t;t1++){
        cin>>n>>x>>y>>z;
         ll k1=0,cnt1=0;
        ll rang=sqrt(n)+3;
        for(i=1;i<=rang;i++){
        if(n%i==0){
        if(n/i==i){
            array[k1]=i;
            k1++;
            cnt1+=1;
        }
            else{
                array[k1]=i;
                k1++;
                array[k1]=n/i;
                k1++;
                cnt1+=2;
            }
        }
    }
        ll coi=0;
        for(i=0;i<cnt1;i++){
    for(j=0;j<cnt1;j++){
                ll te1=array[i],te2=array[j];
        ll te3=n/(te1*te2);
                if(te3!=0){
     if(te1<=x && te2<=y && te3<=z && n%(te1*te2*te3)==0){
                        coi+=1;
                    }
                }
            }
        }
            cout<<coi<<"\n";
    }
return 0;
}
