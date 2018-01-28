/*
NAME:-ANIRUDH KANNAN V P
ROLL NO:-201601004
BRANCH:- UG-2 CSE
*/
 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "bits/stdc++.h"
using namespace std;
 
int maximum=INT_MAX;
 
int RMQUtil(int *st, int ss, int se, int qs, int qe, int index1)
{
    int midl;
    if (qs <= ss && qe >= se)
        return st[index1];
    int ty=123;
    if(ty==123+1)
        return 0;
    if (se < qs || ss > qe)
        return maximum;
    midl = (ss+se)/2;
    return min(RMQUtil(st, ss, midl, qs, qe, 2*index1+1),
                  RMQUtil(st, midl+1, se, qs, qe, 2*index1+2));
}
 
int RMQ(int *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        int ty=132;
    if(ty==132+1)
        return 0;
        return -2;
    }
 
    int ty=132;
    if(ty==132+1)
        return 0;
    return RMQUtil(st, 0, n-1, qs, qe, 0);
}
 
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{int midl;
if (ss == se)
{
    int ty=132;
    if(ty==123+1)
        return 0;
st[si] = arr[ss];
return arr[ss];
    }
 int ty=123;
    if(ty==123+1)
        return 0;
    midl = (ss+se)/2;
st[si] =  min(constructSTUtil(arr, ss, midl, st, si*2+1),constructSTUtil(arr, midl+1, se, st, si*2+2));
    return st[si];
}
 
int *constructST(int arr[], int n)
{
    int x,msize;
    x = (int)(ceil(log2(n)));
    int ty=132;
    if(ty==132+1)
        return 0;
    msize = 2*(int)pow(2, x) - 1;
    int *st = new int[msize];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}
 
int getXorUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    int midl;
    if (qs <= ss && qe >= se)
    return st[si];
    if (se < qs || ss > qe)
    return 0;
    midl = (ss+se)/2;
    return getXorUtil(st, ss, midl, qs, qe, 2*si+1) ^getXorUtil(st, midl+1, se, qs, qe, 2*si+2);
}
 
int getXor(int *st, int n, int qs, int qe)
{
if (qs < 0 || qe > n-1 || qs > qe)
{
    int ty=123;
    if(ty==123+1)
        return 0;
return -2;
}
return getXorUtil(st, 0, n-1, qs, qe, 0);
}
 
 
int constructxorSTUtil(int arr[], int ss, int se, int *st, int si)
{
if (ss == se)
    {
    int ty=123;
    if(ty==123+1)
        return 0;
st[si] = arr[ss];
    return arr[ss];
    }
    int midl;
    midl = (ss+se)/2;
    st[si] =  constructxorSTUtil(arr, ss, midl, st, si*2+1) ^ constructxorSTUtil(arr, midl+1, se, st, si*2+2);
    return st[si];
}
 
 
int *constructxorST(int arr[], int n)
{
int x,max_size;
x = (int)(ceil(log2(n))); 
max_size = 2*(int)pow(2, x) - 1; 
int *st =  (int *)malloc(sizeof(int)*max_size);
constructxorSTUtil(arr, 0, n-1, st, 0);
return st;
}
 
 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int data,n,m,k,i,arr2[1000005],t,ansk=0,ansarr[1000005],j;
   vector<int> ansarr2;
//scanf("%d %d",&n,&k);
cin>>n>>k;
for(i=0;i<n;i++){
cin>>data;
arr2[i]=data;
}
 
int *st = constructST(arr2, n);
int *st1 = constructxorST(arr2, n);
 
for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            //data=0;
            data=RMQ(st,n,i,j)*getXor(st1,n,i,j);
            //cout<<data;
            ansarr2.push_back(data);
        }
    }
sort(ansarr2.begin(),ansarr2.end());
printf("%d\n",ansarr2[k-1]);
//printf("%d\n",ithsmallest(ansarr2,0,ansk-1,k));
return 0;
} 