t=int(input())
while(t):
    t-=1
    n=int(input())
    a1=n*(n+1)*(2*n+1)
    a1//=6
    ans=a1+a1-n*n
    print(ans)
