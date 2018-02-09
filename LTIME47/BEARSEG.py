t=int(input())
while(t):
    t=t-1
    n,p=input().split()
    n,p=int(n),int(p)
    a=list(map(int,input().split()))
    arr=[]
    k=len(a)
    for i in range(k+1):
        for j in range(i+1,k+1):
            arr.append(sum(a[i:j])%p)
    maxele=max(arr)
    print(maxele,arr.count(maxele))
