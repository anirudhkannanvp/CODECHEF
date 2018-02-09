for _ in range(int(input())):
    n,k=map(int,input().split())
    a=bin(k)[2:]
    a=str(a)
    a=a.zfill(n)
    a=a[::-1]
    print(int(a,2))
