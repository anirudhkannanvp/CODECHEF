#include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        int t,n,a[1000005];
        long long int sum,b[1000005],i; 
        cin>>t;
        while(t--)
        {   for(i=0;i<1000005;i++)
            b[i]=0;
            cin>>n;
            for(i=0;i<n;i++)
            {
            cin>>a[i];
            b[a[i]]++;
            }
            sum=0;
            for(i=0;i<1000005;i++)
            if(b[i]>1)
            {
            sum+=b[i]*(b[i]-1);
            }
            cout<<sum<<endl;
        }
    return 0;
    }
