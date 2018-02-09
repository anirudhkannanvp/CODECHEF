#include<bits/stdc++.h>
using namespace std;
int main()
{   
long int t,cost[100007],qu,i,j,no,n1,n2,so,de,op,k,sour,f1,f2,termsarr[1000007],d[1000007];
cin>>t;
while(t){
    t-=1;
    for(j=0;j<100007;j++)cost[j]=0;
    cin>>no>>qu;
    vector<long int> graph[no+1];
    for(j=0;j<no-1;j++){
        cin>>so>>de;
        graph[so-1].push_back(de-1);graph[de-1].push_back(so-1);
    }
    for(long int u=0;u<qu;u++){
        cin>>op;
        if(op==2){
            cin>>sour;
            sour-=1;
            cout<<cost[sour]%1000000007<<"\n";
        }
        if(op==1){
            cin>>sour>>k>>f1>>f2;
            sour-=1;
            termsarr[0]=f1;
            termsarr[1]=f2;
            d[0]=-1;
            d[1]=-1;
            for(i=0;i<1000007;i++)d[i]=-1;
            for(i=2;i<no;i++){
            long int temp=f1+f2;
            termsarr[i]=temp;
            f1=f2;
            f2=termsarr[i];
            d[i]=-1;
            }
        d[sour]=0;
        queue<long int> q;
        q.push(sour);
        while(!q.empty()){
        n1=q.front();
        q.pop();
        vector<long int> :: iterator it;
        for(it=graph[n1].begin();it!=graph[n1].end();it++){
        n2=*it;
        if(d[n2]==-1){
        q.push(n2);
        d[n2]=1+d[n1];
        }
    }
        }
        for(i=0;i<no;i++){
        if(d[i]<=k)cost[i]+=termsarr[d[i]];
    }
}
}
}
return 0;
}
