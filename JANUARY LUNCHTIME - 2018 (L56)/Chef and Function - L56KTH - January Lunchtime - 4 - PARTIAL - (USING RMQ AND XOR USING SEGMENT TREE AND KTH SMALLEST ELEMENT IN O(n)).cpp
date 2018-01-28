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
 
 
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
 
int medianfind(int arr[],int n){
int e1,e2,e3,e4,e5,t[3],k=0,i;
if(n==5){
        e1=min(arr[0],min(arr[1],min(arr[2],min(arr[3],arr[4]))));
        e5=max(arr[0],max(arr[1],max(arr[2],max(arr[3],arr[4]))));
        for(i=0;i<n;i++)if(arr[i]!=e1){if(arr[i]!=e5){t[k++]=arr[i];}}
        if(t[0]<t[1] && t[0]<t[2]){e2=t[0];e3=min(t[1],t[2]);e4=max(t[1],t[2]);}
        else if(t[1]<t[0] && t[1]<t[2]){e2=t[1];e3=min(t[0],t[2]);e4=max(t[0],t[2]);}
        else{e2=t[2];e3=min(t[0],t[1]);e4=max(t[0],t[1]);}
        return e3;
    }
    if(n==4){
        e1=min(arr[0],min(arr[1],min(arr[2],arr[3])));
         e4=max(arr[0],max(arr[1],max(arr[2],arr[3])));
         for(i=0;i<n;i++)if(arr[i]!=e1){if(arr[i]!=e4){t[k++]=arr[i];}}
         if(t[0]<t[1]){e2=t[0],e3=t[1];}
         else e2=t[1];e3=t[0];
         return e2;
    }
    if(n==3){
        e1=min(arr[0],min(arr[1],arr[2]));
        e3=max(arr[0],max(arr[1],arr[2]));
        for(i=0;i<n;i++)if(arr[i]!=e1){if(arr[i]!=e3){e2=arr[i];break;}}
        return e2;
    }
    if(n==2){
    	e1=min(arr[0],arr[1]);
    	e2=max(arr[0],arr[1]);
        return e1;
    }
   else{
        return arr[0];
    }
}
 
int quickpartition(int arr[],int low,int high,int spe){
int i=low,j;
for(i=low;i<high;i++){
//if(i==high)break;
if(arr[i]==spe)break;
//i+=1;
}
swap(&arr[high],&arr[i]);
 
i=low;
for(j=low;j<high;j++){
if(arr[j]<=spe){
swap(&arr[i],&arr[j]);
i++;
}
}
swap(&arr[i],&arr[high]);
return i;
}
 
int ithsmallest(int arr[],int low,int high,int k){
int n=high-low+1,i,n1,rem=n%5,temp[5],k1=0,te,medofmed,j,k2=0;
//if(n<=140)sort(arr,arr+n);return 1;
float n2=(n+4)/5;
n1=floor(n2);//if(n%5!=0)n1+=1;
int medianarr[n1];
//cout<<"HI "<<n2<<" ";
for(i=0;i<n/5;i++){
    	temp[0]=arr[i+low];
    	temp[1]=arr[i+1+low];
    	temp[2]=arr[i+2+low];
    	temp[3]=arr[i+3+low];
    	temp[4]=arr[i+4+low];
    	medianarr[i]=medianfind(temp,5);
    }
    //cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<" "<<temp[3]<<" "<<temp[4]<<"\n";
    	if(n%5!=0){
        if(n%5==1){
        medianarr[i] = arr[low+i*5];}
        if(n%5==2){
          temp[0]=arr[low+i*5];
        	temp[1]=arr[low+i*5+1];
        medianarr[i] = medianfind(temp, n%5);}
        if(n%5==3){
          temp[0]=arr[low+i*5];
        	temp[1]=arr[low+i*5+1];
          temp[2]=arr[low+i*5+2];
        medianarr[i] = medianfind(temp, n%5);}
        if(n%5==4){
          temp[0]=arr[low+i*5];
        	temp[1]=arr[low+i*5+1];
          temp[2]=arr[low+i*5+2];
          temp[3]=arr[low+i*5+3];
        medianarr[i] = medianfind(temp, n%5);}
            i++;}
if(i==1){
medofmed=medianarr[0];
}
else{
medofmed=ithsmallest(medianarr,0,n1-1,floor(n1/2));}
int pos=quickpartition(arr,low,high,medofmed);
if(pos-low==k-1)return arr[pos];
if(pos-low>k-1)return ithsmallest(arr,low,pos-1,k);
return ithsmallest(arr,pos+1,high,k-pos+low-1);
}
 
int minfunc(int arr[1000000],int l,int r){
    int ans=arr[l],i,j;
    for(i=l+1;i<=r;i++){
       ans=min(ans,arr[i]);
    }
    return ans;
}
 
int xorfunc(int arr[1000000],int l,int r){
    int ans=arr[l],i,j;
    for(i=l+1;i<=r;i++){
       ans^=arr[i];
    }
    return ans;
}
 
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
//ios_base::sync_with_stdio(false);
//cin.tie(0);
int data,n,m,k,i,arr2[1000005],t,ansk=0,ansarr[1000005],j;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&data);
arr2[i]=data;
}
 
int *st = constructST(arr2, n);
int *st1 = constructxorST(arr2, n);
 
for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            //data=0;
            data=RMQ(st,n,i,j)*getXor(st1,n,i,j);
            ansarr[ansk++]=data;
        }
    }
printf("%d\n",ithsmallest(ansarr,0,ansk-1,k));
return 0;
}