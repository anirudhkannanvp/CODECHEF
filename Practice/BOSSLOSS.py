from math import *
for _ in range(int(input())):
    n,m=map(int,input().split())
    maxi=n*(n+1)
    maxi//=2
    if(m>maxi):
        print("-1")
    else:
        ans=-1+sqrt(1+8*m)
        ans/=2
        print(ceil(ans))
