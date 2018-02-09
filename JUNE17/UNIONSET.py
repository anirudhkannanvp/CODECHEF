test=input()
test=int(test)
while(test>0):
    test=test-1
    a1che=[]
    n,k=input().split()
    k,n=int(k),int(n)
    n1=n
    ans=0
    while(n>0):
        n=n-1
        arr=list(map(int,input().split()))
        arr=arr[1:arr[0]+1]
        a1che.append(arr)
    for i in range(n1):
        for j in range(i+1,n1):
            if(len(set(a1che[i]+a1che[j]))==k):
                ans+=1
    print(ans)
