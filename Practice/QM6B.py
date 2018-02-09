t=int(input())
while(t):
    t-=1
    ans=1e11+10
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    for j in range(n-k+1):
        ans=min(ans,max(a[j:j+k]))
    print(ans)
