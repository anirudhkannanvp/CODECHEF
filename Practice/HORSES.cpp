#include <iostream>
#include<limits>
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
	int t,n,min1,i,j;
	long long int s[10000];
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    min1=INT_MAX;
	    for(i=0;i<n;i++)
	    cin>>s[i];
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(abs(s[j]-s[i])<min1)
	            min1=abs(s[j]-s[i]);
	        }
	    }
	    cout<<min1<<endl;
	}
	return 0;
}
