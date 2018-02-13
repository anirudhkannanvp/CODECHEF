t=int(input())
while(t):
    t-=1
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    arr=[0]*n
    maxi=max(a)
    mini=min(a)
    for i in range(n):
        arr[i]=max(abs(maxi-i),abs(i-mini))
    print(*arr)
        