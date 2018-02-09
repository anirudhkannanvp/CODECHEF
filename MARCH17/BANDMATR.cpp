#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios_base::sync_with_stdio(false);
    int t,n,c1,c0,a[500][500],i,j,data;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c0=0;
        c1=0;
        for(i=0;i<n*n;i++)
        {
            cin>>data;
            if(data==0)
            c0++;
            else
            c1++;
        }
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        a[i][j]=0;
        int c11=c1;
        int k=1;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(i==j)
        {
        a[i][j]=1;
        c1--;
        }
        i=1;j=0;
        while(c1>0)
        {   c1-=2;
            a[i][j]=1;
            i++;j++;
            if(i==n-1)
            {   
                a[i][j]=1;
                i=++k;
                j=0;
                c1-=2;
                
            }
        }
        j=0;
        if(c11==n*n)
        cout<<n-1<<endl;
        else
        {
        j=0;
        for(i=0;i<n;i++)
        if(a[i][j]==0)
            break;
        cout<<i-1<<endl;
        }
    }
return 0;
}
