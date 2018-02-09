#include <bits/stdc++.h>
using namespace std;
long long int n,a[1000001],i,x,y;
int main() {
    int t;
    ios_base::sync_with_stdio(false);
    cin>>t;
	while(t--)
	{
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	x=y=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(a[i]<y)
		{
			y=a[i];
			break;
		}
	}
	cout<<y%x<<endl;
	}
	return 0;
}
