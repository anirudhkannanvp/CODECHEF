#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int> A;
long long int max(long long int a,long long int b)
{
long long int max;
a>=b ? max=a : max=b;
return max; 
}
long long int f(long long int n)
{
if(n<=11)
return n;
map<long long int,long long int>::iterator i=A.find(n);
if(i!=A.end())
return i->second;
else
{long long int x=max(n,f(n/2)+f(n/3)+f(n/4));;
A[n]=x;
return x;
}
}
int main()
{
long long int n,ans;
int k=0;
while(cin>>n)
{
A.clear();
//cin>>n;
ans=f(n);
cout<<ans;
cout<<endl;
k++;
}
return 0;
}
