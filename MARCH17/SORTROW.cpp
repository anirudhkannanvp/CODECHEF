#include<bits/stdc++.h>
using namespace std;
int t,t1,a[10000];
void insertsort()
{
    for (int i = 1; i < t1; i++)
    {
        for (int j = i; j >= 1; j--)
        {   
            if (a[j] < a[j-1])
            {   int temp;
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
            else
                break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>t;
    t1=t;
    int i;
    while(t--)
    {
        for(i=0;i<t1;i++)
        cin>>a[i];
        insertsort();
        for(i=0;i<t1;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
