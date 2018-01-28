t=int(input())
while(t):
    t-=1
    n=int(input())
    ab=list(map(int,input().split()))
    arr=[]
    for i in range(n-1):
        a,b=input().split()
        arr.append([a,b])
    print(sum(ab)/n) 