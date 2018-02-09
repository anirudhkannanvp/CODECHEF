#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,data,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int s1=0,s2=0;
        for(i=0;i<n;i++)
        {   
            cin>>data;
            if(i%2==0)
            s1+=data;
            else
            s2+=data;
        }
         for(j=0;j<n;j++)
        {   
            cin>>data;
            if(j%2==0)
            s2+=data;
            else
            s1+=data;
        }
        printf("%d\n",min(s1,s2));
    }
    return 0;
}
