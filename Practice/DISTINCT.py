t=int(input())
while(t):
    t-=1
    n=int(input())
    b=set()
    while(n):
        n-=1
        a=str(input())
        b.add(a)
    print(len(b))
    b=list(sorted(b))
    for i in range(len(b)):
        print(b[i])
