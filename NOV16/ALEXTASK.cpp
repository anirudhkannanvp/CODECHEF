#include<bits/stdc++.h>
    #include<limits.h>
    #include<vector>
    using namespace std;
    long long int GCD(long long int u,long long int v) {
        while ( v != 0) {
    	    long long int r;
            r = u % v;
            u = v;
            v = r;
        }
        return u;
    }
    int main()
    {
    long long int t,n,n1,st,i,j;
    long long int g,min1,min,min2;
    scanf("%lld",&t);
    vector<long long int> a;
    while(t--)
    {
    	st=0;
    	min1=LLONG_MAX;
    scanf("%lld",&n);
    n1=n;
    while(n1--)	
    {	
    scanf("%lld",&g);
    a.push_back(g);
    }
    sort(a.begin(),a.end());
    if(n==0)
    min1=0;
    else if(n==1)
    min1=a[0];
    else if(n==2)
    { 
    min1=a[0]*a[1]/GCD(a[0],a[1]);
    }
    else
    {
    for(i=0;i<n;i++)
    if(a[i]==a[i+1])
    {
    min1=a[i];
    break;	
    }
    for(i=0;i<n;i++)
    {
    //min=a[i];
    for(j=0;j<n;j++)	
    {
    	if(j!=i)
    	{
    min2=((a[i]*a[j])/GCD(a[j],a[i]));
    if(min2<min1)
    {
    min1=min2;
    st=1;
    break;	
    }
    }
    }
    }
    min=a[0]*a[1];
    if(min1>min)
    min1=min;
    }
    st=0;
    a.clear();
    printf("%lld",min1);
    printf("\n");	
    }
    return 0;
    }
