from math import gcd
t=int(input())
while(t):
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    gcdarr=[0]*n
    gcdarr[0]=a[0]
    for i in range(1,n):
        gcdarr[i]=gcd(gcdarr[i-1],a[i])
    st=0
    for i in range(n):
        if(gcdarr[i]==1):
            st=1
            break
    if(st):
        print(n)
    else:
        print("-1") 