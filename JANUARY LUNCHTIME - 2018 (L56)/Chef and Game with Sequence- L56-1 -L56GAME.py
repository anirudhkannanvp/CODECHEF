for _ in range(int(input())):
    n=input()
    n=int((n))
    a=list(map(int,input().split()))
    arr=[0,0]
    even=0
    for i in range(n):
        if(a[i]&1):
            arr[0]+=1
        else:
            arr[1]+=1
    even+=arr[0]//2+arr[1]
    ans=arr[0]%2+min(even,1)
    print(ans) 