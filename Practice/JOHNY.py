t=int(input())
while(t):
    t=t-1
    n=int(input())
    a=list(map(int,input().split()))
    k1=int(input())
    k=int(a[k1-1])
    b=sorted(a)
    for i in range(len(a)):
        if(int(b[i])==k):
            print(i+1)
            break
