n,m=map(int,input().split())
for i in range(m):
    q=int(input())
    if(q<n+2 or q>3*n+1):
        print("0")
    else:
        ans=min(3*n+1-q,q-n-1)
        print(ans)