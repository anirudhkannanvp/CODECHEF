t=int(input())
while(t):
    t-=1
    a=str(input())
    ans=0
    for i in range(len(a)):
        ans+=(ord(a[i])-ord('a'))%5
    print(ans)
