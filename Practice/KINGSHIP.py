t=int(input())
while(t):
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    ans=0
    for i in range(1,n):
        ans+=a[i]*a[0]
    print(ans)