#include "bits/stdc++.h"
using namespace std;
int main()
{
int n,l,r,arr[1000000],a,b,c,cou=0,st=0,i,j,k;
scanf("%d %d %d",&n,&l,&r);
for(i=0;i<n;i++)
cin>>arr[i];
for(i=l;i<=r;i++)
{
a=i;
for(j=0;j<n-1;j++)
{
b=arr[j];
for(k=j+1;k<n-1;k++)
{
c=arr[k];
//if(b!=c && a!=b)	
{
if(((a+b) > c ) )
    {
        if((b+c) > a )
        {
            if((a+c) > b ) 
            {		cou++;
            		//cout<<a<<"  "<<b<<"  "<<c<<endl;
            		st=1;
            		break;
            		
            }
            else
            {	
            	if(st==1)break;
            	st=0;
            }
        }
        else
        {
          if(st==1)break;
            	st=0;
 
        }
    }
 else
    {
        if(st==1)break;
            	st=0;
    }
}
if(st==1)break;
}
if(st==1)break;
 
}
st=0;
//if(j==n-1 || j==n-2)break;
}
printf("%d\n",cou);
return 0;
}
