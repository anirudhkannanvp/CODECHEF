t=int(input())
while(t):
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    a.sort(reverse=True)
    if(n==1):
        print(a[0])
    elif(n==2):
        print(sum(a))
    else:
        ans=0
        for i in range(n):
            if(i%4<2):
                ans+=a[i]
        print(ans)