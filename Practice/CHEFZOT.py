n=int(input())
a=list(map(int,input().split()))
ans=0
maxi=0
for i in range(n):
    if(a[i]==0):
        ans=0
    else:
        ans+=1
        maxi=max(maxi,ans)
print(maxi) 