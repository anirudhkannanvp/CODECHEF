for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    s=sum(a)
    c=0
    for i in range(n):
        if(a[i]+k>s-a[i]):
            #print([i])
            c+=1
    print(c) 