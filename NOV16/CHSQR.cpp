//#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int k;
/*int check(int a[100][400],int k1)
{
int l=0,i,j;
for(i=0;i<k;i++)
for(j=0;j<k;j++)
if(a[i][j]==k1)
l++;
return l;
}*/
int main()
{
int t,st,l1,cx,cy,k1=1,i,j,n;
int a[400][400];
scanf("%d",&t);
while(t--)
{
n=1;
k1=1;
scanf("%d",&k);
cx=(k+1)/2;
cy=(k+1)/2;
k1=1;
for(i=0;i<k;i++)
for(j=0;j<k;j++)
a[i][j]=-1;
i=0;j=cy-1;
st=0;
while(n!=k*k)
{
a[i][j]=k1;
j--;
i++;
if(j==-1)
j=k-1;
//l1=check(a,k1);
if(n%k==0 && k1<=cx)
{
k1++;
j--;
i=0;
}
if(n==(k+1)/2*k)
{
i=0;
j=cx;
//k1++;
st=1;
}
if(n%k==0 && k1>cx && st==0)
{
k1++;
j++;;
i=0;
}
st=0;
n++;
}
a[k-1][0]=k1;
k1=1;
if(k==1)
printf("1\n");
else
{
for(i=0;i<k;i++)
{
for(j=0;j<k;j++)
printf("%d ",a[i][j]);
printf("\n");
}
}
//printf("\n");
}
return 0;
}
