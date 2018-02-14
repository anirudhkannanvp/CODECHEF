t=int(input())
while(t):
    t-=1
    a=str(input())
    n=len(a)
    arr=[]
    for i in range(n-1):
        temp=a[i]+a[i+1]
        arr.append(temp)
    print(len(set(arr)))