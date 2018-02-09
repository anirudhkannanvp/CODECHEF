/*
NAME:-ANIRUDH KANNAN V P
ROLL NO:-201601004
BRANCH:- UG-2 CSE
*/
 
#include"bits/stdc++.h"
using namespace std;
#define ll long long
 
void bfs(ll d[],set<ll> g[],ll n,ll don[],ll k){
    for(ll i=0;i<n;i++)
     {
        d[i]=-1;
     }
     ll maans=0;
     ll s;
     queue<ll> q;
    for(ll i=0;i<k;i++)
    {
        s=don[i];
        d[s]=1;
        maans+=1;
        //cout<<"HI";
        q.push(s);
    }//Correct
    ll v,u,st=0,temp=1;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        set<ll> :: iterator ite;
        temp=d[u];
        for(ite=g[u].begin();ite!=g[u].end();ite++)
        {
            v=*ite;
            if(d[v]==-1)
            {
                q.push(v);
                d[v]=d[u]+1;
                //temp=d[v];
                g[v].erase(u);
                //g[u].erase(v);
            }
            else
            {
                st=1;
                break;
            }
        }
        if(st==1)break;
    }
        if(st==0){temp+=1;}
        //cout<<"temp"<<temp;
        for(ll i=0;i<n;i++){
           // cout<<d[i]<<" ";
         if(d[i]!=-1 && d[i]<=temp && d[i]!=1)
               maans+=1;
        }
        cout<<(maans);
    return;//END OF BFS FUNCTION
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
    
ll n,i,a,b,t,m,k;
cin>>n>>m>>k;
set<ll> g[n];
 for(i=0;i<m;i++){
cin>>a>>b;
g[a-1].insert(b-1);
g[b-1].insert(a-1);
}
ll d[1000000];
ll don[1000000];
    for(i=0;i<k;i++){cin>>a;don[i]=a-1;}//cout<<don[i]<<" ";}
bfs(d,g,n,don,k);
 
    return 0;
}
