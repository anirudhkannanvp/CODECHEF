for _ in range(int(input())):
    n,k=map(int,input().split())
    n1=n
    arr=list(map(int,input().split()))
    maxe=max(arr)+1
    arr.sort()
    k1=k
    while(k1):
        k1-=1
        arr.append(maxe)
    print(arr[(n1+k)//2])
