#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int a[1000],b,i=0,j;
while(b!=42)
{
cin>>b;
a[i++]=b;
}
for(j=0;j<i-1;j++)
cout<<a[j]<<endl;
return 0;
}
