#include "bits/stdc++.h"
using namespace std;
int i,l,r;
int CeilIndex(std::vector<int> &v, int l, int r, int key) {
	while (r-l > 1) {
	int m = l + (r-l)/2;
	if (v[m] >= key)
		r = m;
	else
		l = m;
	}
	return r;
}
int LongestIncreasingSubsequenceLength(std::vector<int> &v) {
	if (v.size() == 0)
		return 0;
	std::vector<int> tail(v.size(), 0);
	int length = 1; // always points empty slot in tail
	tail[0] = v[0];
	for (size_t i = 1; i < v.size(); i++) {
		if (v[i] < tail[0])
			// new smallest value
			tail[0] = v[i];
		else if (v[i] > tail[length-1])
			// v[i] extends largest subsequence
			tail[length++] = v[i];
		else
			// v[i] will become end candidate of an existing subsequence or
			// Throw away larger elements in all LIS, to make room for upcoming grater elements than v[i]
			// (and also, v[i] would have already appeared in one of LIS, identify the location and replace it)
			tail[CeilIndex(tail, -1, length-1, v[i])] = v[i];
	}
	return length;
}
int main()
{
int t,m,n,k=0,data;
vector<int> v1;
vector<int> v;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&m);
v1.erase(v1.begin(),v1.end());
for(i=0;i<n;i++)
{
scanf("%d",&data);
v1.push_back(data);
}
while(m--)
{
scanf("%d %d",&l,&r);
v.erase(v.begin(),v.end());
for(i=l-1;i<=r-1;i++)
{
data=v1[i];
v.push_back(data);
}
printf("%d",LongestIncreasingSubsequenceLength(v));
printf("\n");
}
}
return 0;
}
