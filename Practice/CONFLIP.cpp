#include <iostream>
#include<limits>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
	long int t,g,n,I,Q;
    cin>>t;
	while(t--)
	{
	    cin>>g;
	    while(g--)
	    {
	        cin>>I>>n>>Q;
	        if(Q==I || n%2==0)
	        {
	        cout<<n/2<<endl;
	        }
	        else
	        cout<<n/2+1<<endl;
	    }
	}
	return 0;
}
