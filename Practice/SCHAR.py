for _ in range(int(input())):
    arr=list(input())
    n=len(arr)
    sta=[-1]*26
    ans=[0]*(n+1)
    ans[0]=0
    temp=ord(arr[0])-97
    sta[temp]=0
    for i in range(1,n):
        temp=ord(arr[i])-97
        if(sta[temp]==-1):
            ans[i]=ans[i-1]+abs(ord(arr[i-1])-ord(arr[i]))
            sta[temp]=i
        else:
            ans[i]=min(ans[i-1]+abs(ord(arr[i-1])-ord(arr[i])),ans[sta[temp]])
            sta[temp]=i
        sta[temp]=i
    #print(ans)
    print(ans[n-1])
